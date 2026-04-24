#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n,cnt1=0,cnt2=0;
int px[4]={1,0,-1,0};
int py[4]={0,-1,0,1};
vector<string> v;
queue<pair<int,int>> q;
vector<vector<bool>> check1;
vector<vector<bool>> check2;

void bfs(char a){
    while(q.size()!=0){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+px[i];
            int ny=y+py[i];
            if(nx<0||nx>=n||ny<0||ny>=n||check1[nx][ny]||a!=v[nx][ny]) continue;
            check1[nx][ny]=1;
            q.push({nx,ny});
        }
    }
    return;
}

void bfs2(char a){
    while(q.size()!=0){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+px[i];
            int ny=y+py[i];
            if(nx<0||nx>=n||ny<0||ny>=n||check2[nx][ny]) continue;
            if(a=='R'&&v[nx][ny]=='B') continue;
            if(a=='G'&&v[nx][ny]=='B') continue;
            if(a=='B'&&v[nx][ny]!='B') continue;
            check2[nx][ny]=1;
            q.push({nx,ny});
        }
    }
    return;
}

int main(){
    FAST_IO;
    cin>>n;
    v.resize(n);
    check1.resize(n);
    check2.resize(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        check1[i].resize(n,0);
        check2[i].resize(n,0);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(check1[i][j]) continue;
            check1[i][j]=1;
            q.push({i,j});
            bfs(v[i][j]);
            cnt1++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(check2[i][j]) continue;
            check2[i][j]=1;
            q.push({i,j});
            bfs2(v[i][j]);
            cnt2++;
        }
    }
    cout<<cnt1<<" "<<cnt2;
    return 0;
}