#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int solve(){

    int n,x,y;

    cin>>n;

    queue<pair<int,int>> xy;

    queue<int> cnt;

    vector<vector<bool>> c(n);

    for(int i=0;i<n;i++) c[i].resize(n,0);

    cin>>x>>y;

    xy.push({x,y});

    cnt.push(0);

    cin>>x>>y;

    int xx[8]={2,1,-1,-2,-2,-1,1,2};

    int yy[8]={-1,-2,-2,-1,1,2,2,1};

    while(xy.size()!=0){

        int a=xy.front().first;

        int b=xy.front().second;

        xy.pop();

        if(a==x&&b==y){

            return cnt.front();

        }

        else{

            for(int i=0;i<8;i++){

                int nx=a+xx[i];

                int ny=b+yy[i];

                if(nx<0||nx>=n||ny<0||ny>=n) continue;

                if(c[nx][ny]==1) continue;

                c[nx][ny]=1;

                xy.push({nx,ny});

                cnt.push(cnt.front()+1);

            }

        }

        cnt.pop();

    }

}

int main(){

    FAST_IO;

    int t;

    cin>>t;

    for(int i=0;i<t;i++) cout<<solve()<<"\n";

    return 0;

}