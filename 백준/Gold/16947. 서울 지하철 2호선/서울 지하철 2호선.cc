#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n;
vector<vector<int>> sub;
vector<bool> notcut;
vector<int> result;

void solve(){
    queue<int> cut;
    do{
        while(cut.size()!=0){
            int del=cut.front();
            cut.pop();
            for(int i=1;i<=n;i++){
                for(int j=0;j<sub[i].size();j++)
                    if(sub[i][j]==del) sub[i][j]=-1;
            }
        }
        int cutting=0;
        for(int i=1;i<=n;i++){
            int pnt=0;
            for(int j=0;j<sub[i].size();j++)
                if(sub[i][j]!=-1) pnt++;
            if(pnt<=1&&notcut[i]){
                cutting++;
                cut.push(i);
                notcut[i]=false;
            }
        }
    }while(cut.size()!=0);
}

int main(){
    FAST_IO
    cin>>n;
    sub.resize(n+1);
    result.resize(n+1,-1);
    notcut.resize(n+1,true);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        sub[a].push_back(b);
        sub[b].push_back(a);
    }
    auto sub2=sub;
    solve();
    queue<pair<int,int>> bfs;
    for(int i=1;i<=n;i++){
        if(notcut[i]){
            bfs.push({i,1});
            result[i]=0;
        }
    }
    while(bfs.size()!=0){
        int dot=bfs.front().first;
        int dist=bfs.front().second;
        bfs.pop();
        for(int i=0;i<sub2[dot].size();i++){
            int nextdot=sub2[dot][i];
            if(result[nextdot]!=-1) continue;
            result[nextdot]=dist;
            bfs.push({nextdot,dist+1});
        }
    }
    for(int i=1;i<=n;i++)
        cout<<result[i]<<' ';
    return 0;
}