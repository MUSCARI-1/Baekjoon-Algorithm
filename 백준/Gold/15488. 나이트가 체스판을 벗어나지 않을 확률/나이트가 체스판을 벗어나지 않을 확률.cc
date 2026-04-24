#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

vector<vector<long double>> chess;
int n,x,y,k,now=0;
int xx[8]={1,2,2,1,-1,-2,-2,-1};
int yy[8]={2,1,-1,-2,-2,-1,1,2};

void move(){
    vector<tuple<int,int,long double>> exist;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(chess[i][j]!=0){
                exist.push_back({i,j,chess[i][j]/8});
                chess[i][j]=0;
            }
        }
    }
    for(int i=0;i<exist.size();i++){
        int a=get<0>(exist[i]);
        int b=get<1>(exist[i]);
        long double percent=get<2>(exist[i]);
        for(int j=0;j<8;j++){
            int nx=a+xx[j];
            int ny=b+yy[j];
            if(nx<1||nx>n||ny<1||ny>n) continue;
            chess[nx][ny]+=percent;
        }
    }
    return;
}

int main(){
    FAST_IO;
    cout<<fixed;
    cout.precision(15);
    cin>>n>>x>>y>>k;
    chess.resize(n+1);
    for(int i=0;i<=n;i++) chess[i].resize(n+1,0);
    chess[x][y]=1;
    while(now!=k){
        move();
        now++;
    }
    long double cnt=0;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cnt+=chess[i][j];
    cout<<cnt;
    return 0;
}