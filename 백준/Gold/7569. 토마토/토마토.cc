#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m,h;

vector<vector<vector<int>>> v;

queue<int> x;

queue<int> y;

queue<int> z;

void bfs(int a,int b,int c){

    int xx[6]={1,-1,0,0,0,0};

    int yy[6]={0,0,1,-1,0,0};

    int zz[6]={0,0,0,0,1,-1};

    for(int i=0;i<6;i++){

        int nx=a+xx[i];

        int ny=b+yy[i];

        int nz=c+zz[i];

        if(nx<0||nx>=h||ny<0||ny>=n||nz<0||nz>=m) continue;

        if(v[nx][ny][nz]==0){

            v[nx][ny][nz]=v[a][b][c]+1;

            x.push(nx);

            y.push(ny);

            z.push(nz);

        }

    }

}

int main(){

    FAST_IO;

    cin>>m>>n>>h;

    v.resize(h);

    bool c=0;

    int res=-1;

    int q=0;

    for(int i=0;i<h;i++){

        v[i].resize(n);

        for(int j=0;j<n;j++){

            v[i][j].resize(m);

            for(int k=0;k<m;k++){

                cin>>v[i][j][k];

                if(v[i][j][k]==1){

                    x.push(i);

                    y.push(j);

                    z.push(k);

                }

            }

        }

    }

    for(int i=0;i<h;i++){

        for(int j=0;j<n;j++){

            for(int k=0;k<m;k++){

                if(v[i][j][k]==0){

                    c=1;

                }

            }

        }

    }

    if(c==0){

        cout<<q;

        return 0;

    }

    while(x.size()!=0){

        bfs(x.front(),y.front(),z.front());

        x.pop();

        y.pop();

        z.pop();

    }

    q=-1;

    for(int i=0;i<h;i++){

        for(int j=0;j<n;j++){

            for(int k=0;k<m;k++){

                if(v[i][j][k]==0){

                    cout<<q;

                    return 0;

                }

                else if(v[i][j][k]==-1) continue;

                else res=max(res,v[i][j][k]);

            }

        }

    }

    res--;

    cout<<res;

    return 0;

}