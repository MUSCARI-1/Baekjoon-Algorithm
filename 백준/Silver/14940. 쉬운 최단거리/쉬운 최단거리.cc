#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m;
vector<vector<int>> arr,res;
queue<pair<int,int>> que;

int play(){
    int x,y;
    x=que.front().first;
    y=que.front().second;
    que.pop();
    int xx[4]={1,0,-1,0};
    int yy[4]={0,-1,0,1};
    for(int i=0;i<4;i++){
        int nx=x+xx[i];
        int ny=y+yy[i];
        if(nx<0||nx>=n||ny<0||ny>=m||arr[nx][ny]==0||res[nx][ny]!=-1) continue;
        res[nx][ny]=res[x][y]+1;
        que.push({nx,ny});
    }
    return 0;
}

int main(){
    FAST_IO;
    cin>>n>>m;
    arr.resize(n);
    res.resize(n);
    for(int i=0;i<n;i++){
        arr[i].resize(m);
        res[i].resize(m);
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            res[i][j]=-1;
        }
    }
    int a=-1,b=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==2){
                a=i;
                b=j;
            }
            else if(arr[i][j]==0) res[i][j]=0;
        }
    }
    res[a][b]=0;
    que.push({a,b});
    while(que.size()!=0) play();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout<<res[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}