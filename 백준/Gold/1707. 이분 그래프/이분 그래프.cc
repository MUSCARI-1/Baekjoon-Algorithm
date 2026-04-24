#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int solve(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>> graph(v+1);
    vector<int> c(v+1,-1);
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1;i<=v;i++){
        if(c[i]!=-1) continue;
        queue<pair<int,int>> q;
        c[i]=1;
        for(int j=0;j<graph[i].size();j++){
            q.push({graph[i][j],2});
        }
        while(q.size()!=0){
            int point=q.front().first;
            int group=q.front().second;
            int another;
            if(group==1) another=2;
            else another=1;
            q.pop();
            if(c[point]==-1){
                c[point]=group;
                for(int j=0;j<graph[point].size();j++) q.push({graph[point][j],another});
            }
            else if(c[point]==group) continue;
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solve();
    return 0;
}