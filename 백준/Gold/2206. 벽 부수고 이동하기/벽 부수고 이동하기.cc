#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<set>

#include<map>

#include<cmath>

#include<string>

using namespace std;

int n,m;

string str;

vector<vector<bool>> pow_check;

vector<vector<bool>> check;

vector<vector<bool>> maze;

vector<vector<int>> pow_cnt;

vector<vector<int>> cnt;

queue<pair<int,int>> now;

queue<int> pw;

int make(){

    cin >> n >> m;

    check.resize(n);

    maze.resize(n);

    pow_cnt.resize(n);

    cnt.resize(n);

    pow_check.resize(n);

    for(int i=0;i<n;i++){

        pow_check[i].resize(m);

        check[i].resize(m);

        maze[i].resize(m);

        pow_cnt[i].resize(m);

        cnt[i].resize(m);

        cin >> str;

        for(int j=0;j<m;j++){

            maze[i][j]=str[j]-'0';

            pow_check[i][j]=0;

            check[i][j]=0;

            pow_cnt[i][j]=0;

            cnt[i][j]=0;

        }

    }

    cnt[0][0]=1;

    pow_cnt[0][0]=1;

    cnt[n-1][m-1]=-1;

    pow_cnt[n-1][m-1]=-1;

    now.push({0,0});

    pw.push(1);

    return 0;

}

int solve(int x,int y,int p){

    if(x==n-1 && y==m-1) return 0;

    int a[4]={1,0,-1,0};

    int b[4]={0,-1,0,1};

    int nx,ny;

    for(int i=0;i<4;i++){

        nx=x+a[i];

        ny=y+b[i];

        if(nx>-1 && nx<n && ny<m && ny>-1){

            if(check[nx][ny]==1 && pow_check[nx][ny]==1) continue;

            else if(p==0 && maze[nx][ny]==1) continue;

            else if(p==1 && maze[nx][ny]==0){

                if(pow_check[nx][ny]==0){

                    pow_check[nx][ny]=1;

                    pow_cnt[nx][ny]=pow_cnt[x][y]+1;

                    now.push({nx,ny});

                    pw.push(1);

                    continue;

                }

                continue;

            }

            else if(p==0 && maze[nx][ny]==0){

                if(check[nx][ny]==0){

                    check[nx][ny]=1;

                    cnt[nx][ny]=cnt[x][y]+1;

                    now.push({nx,ny});

                    pw.push(0);

                    continue;

                }

                continue;

            }

            else if(p==1 && maze[nx][ny]==1){

                if(check[nx][ny]==0){

                    check[nx][ny]=1;

                    cnt[nx][ny]=pow_cnt[x][y]+1;

                    now.push({nx,ny});

                    pw.push(0);

                }

                continue;

            }

        }

    }

    return 0;

}

int main(){

    make();

    if(maze.size()==1 && maze[0].size()==1){

        cout<<'1';

        return 0;

    }

    while(now.size()!=0){

        solve(now.front().first,now.front().second,pw.front());

        now.pop();

        pw.pop();

    }

    if(cnt[n-1][m-1]==-1 && pow_cnt[n-1][m-1]==-1) cout<<"-1";

    else if(cnt[n-1][m-1]==-1) cout<<pow_cnt[n-1][m-1];

    else if(pow_cnt[n-1][m-1]==-1) cout<<cnt[n-1][m-1];

    else cout<<min(cnt[n-1][m-1],pow_cnt[n-1][m-1]);

    return 0;

}