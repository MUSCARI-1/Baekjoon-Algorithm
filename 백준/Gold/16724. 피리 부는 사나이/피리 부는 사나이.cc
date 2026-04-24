#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int n,m,cnt=0;
vector<vector<char>> v;
vector<vector<int>> check;

bool road(int a,int b){
    int x=a,y=b;
    vector<pair<int,int>> back;
    while(check[x][y]==0){
        check[x][y]=-1;
        back.push_back({x,y});
        char k=v[x][y];
        if(k=='U') x--;
        else if(k=='D') x++;
        else if(k=='L') y--;
        else y++;
    }
    if(check[x][y]==-1){
        for(int i=0;i<back.size();i++){
            int x=back[i].first;
            int y=back[i].second;
            check[x][y]=1;
        }
        return 1;
    }
    else{
        for(int i=0;i<back.size();i++){
            int x=back[i].first;
            int y=back[i].second;
            check[x][y]=1;
        }
        return 0;
    }
}

int main(){
    FAST_IO;
    cin>>n>>m;
    v.resize(n);
    check.resize(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v[i].resize(m);
        check[i].resize(m,0);
        for(int j=0;j<m;j++) v[i][j]=s[j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(check[i][j]==0){
                bool c=road(i,j);
                if(c) cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}