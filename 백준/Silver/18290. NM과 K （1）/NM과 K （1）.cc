#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> v;
vector<vector<bool>> sel;
vector<pair<int,int>> xy;
int n,m,k,cnt=-9999999;
int xx[4]={1,0,-1,0};
int yy[4]={0,-1,0,1};

int solve(int x,int y){
    if(xy.size()==k){
        int sum=0;
        for(int i=0;i<k;i++) sum+=v[xy[i].first][xy[i].second];
        cnt=max(cnt,sum);
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i<x) continue;
            if(i==x&&j<=y) continue;
            bool c=1;
            for(int l=0;l<4;l++){
                int nx=i+xx[l];
                int ny=j+yy[l];
                if(nx<0||nx>=n||ny<0||ny>=m) continue;
                if(sel[nx][ny]) c=0;
            }
            if(c){
                sel[i][j]=1;
                xy.push_back({i,j});
                solve(i,j);
                sel[i][j]=0;
                xy.pop_back();
            }
        }
    }
    return 0;
}

int main(){
    FAST_IO
    cin>>n>>m>>k;
    v.resize(n);
    sel.resize(n);
    for(int i=0;i<n;i++){
        v[i].resize(m);
        sel[i].resize(m,false);
        for(int j=0;j<m;j++) cin>>v[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            xy.push_back({i,j});
            sel[i][j]=1;
            solve(i,j);
            sel[i][j]=0;
            xy.pop_back();
        }
    }
    cout<<cnt;
    return 0;
}