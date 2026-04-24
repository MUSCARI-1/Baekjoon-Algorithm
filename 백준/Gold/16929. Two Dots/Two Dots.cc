#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m;
bool check=false;
vector<string> board;
int xx[4]={1,0,-1,0},yy[4]={0,-1,0,1};

void dfs(int a,int b,int fa,int fb,int depth){
    char k=board[a][b];
    board[a][b]='!';
    for(int i=0;i<4;i++){
        int nx=a+xx[i],ny=b+yy[i];
        if(nx<0||ny<0||nx>=n||ny>=m) continue;
        if(nx==fa&&ny==fb&&depth>=4) check=true;
        if(board[nx][ny]==k) dfs(nx,ny,fa,fb,depth+1);
    }
    board[a][b]=k;
}

int main(){
    FAST_IO
    cin>>n>>m;
    board.resize(n);
    for(int i=0;i<n;i++) cin>>board[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dfs(i,j,i,j,1);
            board[i][j]='!';
        }
    }
    check?cout<<"Yes":cout<<"No";
    return 0;
}