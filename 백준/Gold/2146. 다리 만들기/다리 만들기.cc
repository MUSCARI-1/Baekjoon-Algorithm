#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n,res=123456789,islandNum=0;
vector<vector<int>> v;
vector<vector<bool>> makingVisted;
int xx[4]={1,0,-1,0};
int yy[4]={0,-1,0,1};

void vMake(int a,int b){
    islandNum++;
    queue<pair<int,int>> q;
    v[a][b]=islandNum;
    makingVisted[a][b]=1;
    q.push({a,b});
    while(q.size()!=0){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+xx[i];
            int ny=y+yy[i];
            if(nx<0||ny<0||nx>=n||ny>=n||makingVisted[nx][ny]||v[nx][ny]==0) continue;
            makingVisted[nx][ny]=1;
            v[nx][ny]=islandNum;
            q.push({nx,ny});
        }
    }
}

void bridge(int startIslandNum){
    vector<vector<bool>> visted(n);
    for(int i=0;i<n;i++) visted[i].resize(n,0);
    queue<tuple<int,int,int>> q;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(v[i][j]==startIslandNum){q.push({i,j,0}); visted[i][j]=1;}
    while(q.size()!=0){
        int x=get<0>(q.front());
        int y=get<1>(q.front());
        int cost=get<2>(q.front());
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+xx[i];
            int ny=y+yy[i];
            if(nx<0||ny<0||nx>=n||ny>=n||v[nx][ny]==startIslandNum||visted[nx][ny]) continue;
            else if(v[nx][ny]==0){
                visted[nx][ny]=1;
                q.push({nx,ny,cost+1});
            }
            else{
                res=min(res,cost);
                return;
            }
        }
    }
}

int main(){
    FAST_IO;
    cin>>n;
    v.resize(n);
    makingVisted.resize(n);
    for(int i=0;i<n;i++){
        v[i].resize(n);
        makingVisted[i].resize(n,0);
        for(int j=0;j<n;j++) cin>>v[i][j];
    }
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(v[i][j]!=0&&!makingVisted[i][j]) vMake(i,j);
    for(int i=1;i<=islandNum;i++) bridge(i);
    cout<<res;
    return 0;
}
