#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<string> v;
int n,m,cnt=0;
queue<pair<int,int>> q;

void check(){
    int x=q.front().first;
    int y=q.front().second;
    q.pop();
    int xx[4]={1,0,-1,0};
    int yy[4]={0,-1,0,1};
    for(int i=0;i<4;i++){
        int nx=x+xx[i];
        int ny=y+yy[i];
        if(nx<0||ny<0||nx>=n||ny>=m) continue;
        if(v[nx][ny]=='X'||v[nx][ny]=='I') continue;
        else if(v[nx][ny]=='P') cnt++;
        v[nx][ny]='I';
        q.push({nx,ny});
    }
}

int main(){
    FAST_IO
    cin>>n>>m;
    v.resize(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='I'){
                q.push({i,j});
            }
        }
    }
    while(q.size()!=0) check();
    if(cnt==0) cout<<"TT";
    else cout<<cnt;
    return 0;
}