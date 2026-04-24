#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int r,c,res=1;
int px[4]={1,0,-1,0};
int py[4]={0,-1,0,1};
string s;
vector<string> board;
vector<bool> checkNum(30,0);
vector<vector<bool>> checkBoard;

void dfs(int x,int y,int depth){
    res=max(res,depth);
    for(int i=0;i<4;i++){
        int nx=x+px[i];
        int ny=y+py[i];
        if(nx<0||nx>=r||ny<0||ny>=c||checkBoard[nx][ny]) continue;
        int nextAlpha=board[nx][ny]-65;
        if(checkNum[nextAlpha]) continue;
        checkBoard[nx][ny]=1;
        checkNum[nextAlpha]=1;
        dfs(nx,ny,depth+1);
        checkBoard[nx][ny]=0;
        checkNum[nextAlpha]=0;
    }
    return;
}

int main(){
    FAST_IO;
    cin>>r>>c;
    board.resize(r);
    checkBoard.resize(r);
    for(int i=0;i<r;i++){
        cin>>board[i];
        checkBoard[i].resize(c,0);
    }
    checkBoard[0][0]=1;
    checkNum[board[0][0]-65]=1;
    dfs(0,0,1);
    cout<<res;
    return 0;
}