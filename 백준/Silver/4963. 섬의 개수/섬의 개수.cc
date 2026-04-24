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

int a,b;

int cnt=0;

vector<vector<bool>> land;

queue<pair<int,int>> now;

int make(){

    for(int i=0;i<a;i++){

        for(int j=0;j<b;j++){

            int o;

            cin>>o;

            land[i][j]=o;

        }

    }

    return 0;

}

int solve(int x,int y){

    land[x][y]=0;

    int nx,ny;

    int aa[8]={1,1,0,-1,-1,-1,0,1};

    int bb[8]={0,-1,-1,-1,0,1,1,1};

    for(int i=0;i<8;i++){

        nx=x+aa[i];

        ny=y+bb[i];

        if(nx>=0 && nx<a && ny>=0 && ny<b && land[nx][ny]==1){

            now.push({nx,ny});

            land[nx][ny]=0;

        }

    }

    return 0;

}

int first_(){

    land.resize(52);

    for(int i=0;i<52;i++){

        land[i].resize(52);

    }

    return 0;

}

int main(){

    first_();

    for(int z=1;z>0;z++){

        cin >> b >> a;

        if(a==0 && b==0) break;

        make();

        for(int i=0;i<a;i++){

            for(int j=0;j<b;j++){

                if(land[i][j]==1){

                    now.push({i,j});

                    while(now.size()!=0){

                        solve(now.front().first,now.front().second);

                        now.pop();

                    }

                    cnt++;

                }

            }

        }

        cout<<cnt<<endl;

        cnt=0;

    }

    return 0;

}