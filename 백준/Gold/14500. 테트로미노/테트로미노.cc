#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> v;

vector<vector<bool>> c;

vector<pair<int,int>> xy;

int result=0,n,m;

int bfs(int x,int y){

    if(xy.size()==4){

        int now=0;

        for(int i=0;i<4;i++) now+=v[xy[i].first][xy[i].second];

        result=max(result,now);

        return 0;

    }

    int mx[4]={1,0,-1,0};

    int my[4]={0,-1,0,1};

    for(int i=0;i<4;i++){

        int nx=x+mx[i];

        int ny=y+my[i];

        if(nx<0||nx>=n||ny<0||ny>=m||c[nx][ny]==1) continue;

        c[nx][ny]=1;

        xy.push_back({nx,ny});

        bfs(nx,ny);

        xy.pop_back();

        c[nx][ny]=0;

    }

    return 0;

}

int t(int x,int y){

    int mx[4]={1,0,-1,0};

    int my[4]={0,-1,0,1};

    vector<pair<int,int>> side;

    for(int i=0;i<4;i++){

        int nx=x+mx[i];

        int ny=y+my[i];

        if(nx<0||nx>=n||ny<0||ny>=m) continue;

        side.push_back({nx,ny});

    }

    if(side.size()<3) return 0;

    else if(side.size()==3){

        int now=v[x][y];

        for(int i=0;i<3;i++) now+=v[side[i].first][side[i].second];

        result=max(result,now);

    }

    else{

        for(int i=0;i<4;i++){

            int now=v[x][y];

            for(int j=0;j<4;j++){

                if(i!=j){

                    now+=v[side[j].first][side[j].second];

                }

            }

            result=max(result,now);

        }

    }

    return 0;

}

int main(){

    FAST_IO;

    cin>>n>>m;

    v.resize(n);

    c.resize(n);

    for(int i=0;i<n;i++){

        v[i].resize(m);

        c[i].resize(m,0);

        for(int j=0;j<m;j++) cin>>v[i][j];

    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            c[i][j]=1;

            xy.push_back({i,j});

            bfs(i,j);

            t(i,j);

            xy.pop_back();

            c[i][j]=0;

        }

    }

    cout<<result;

    return 0;

}