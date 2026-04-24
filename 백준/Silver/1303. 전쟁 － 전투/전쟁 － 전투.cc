#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int w=0;

int b=0;

int n,m;

queue<pair<int,int>> q;

vector<string> v;

vector<vector<bool>> c;

void bfs(bool k){

    int x=q.front().first;

    int y=q.front().second;

    q.pop();

    int xx[4]={1,0,-1,0};

    int yy[4]={0,-1,0,1};

    for(int i=0;i<4;i++){

        int nx=x+xx[i];

        int ny=y+yy[i];

        if(nx>=m||nx<0||ny>=n||ny<0) continue;

        if(k==0&&!c[nx][ny]&&v[nx][ny]=='W'){

            q.push({nx,ny});

            c[nx][ny]=1;

        }

        else if(k==1&&!c[nx][ny]&&v[nx][ny]=='B'){

            q.push({nx,ny});

            c[nx][ny]=1;

        }

    }

    return;

}

int main(){

    FAST_IO;

    cin>>n>>m;

    v.resize(m);

    c.resize(m);

    for(int i=0;i<m;i++){

        c[i].resize(n,0);

        cin>>v[i];

    }

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            if(!c[i][j]&&v[i][j]=='W'){

                int cnt=0;

                q.push({i,j});

                c[i][j]=1;

                while(q.size()!=0){

                    bfs(0);

                    cnt++;

                }

                w+=cnt*cnt;

            }

            else if(!c[i][j]&&v[i][j]=='B'){

                int cnt=0;

                q.push({i,j});

                c[i][j]=1;

                while(q.size()!=0){

                    bfs(1);

                    cnt++;

                }

                b+=cnt*cnt;

            }

        }

    }

    cout<<w<<" "<<b;

    return 0;

}