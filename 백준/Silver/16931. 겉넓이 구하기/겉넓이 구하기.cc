#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m;

    cin>>n>>m;

    int cnt=n*m*2;

    vector<vector<int>> cube(n);

    for(int i=0;i<n;i++){

        cube[i].resize(m);

        for(int j=0;j<m;j++) cin>>cube[i][j];

    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            for(int k=1;k<=cube[i][j];k++){

                int p=0;

                int x[4]={1,0,-1,0};

                int y[4]={0,-1,0,1};

                for(int l=0;l<4;l++){

                    int nx=i+x[l];

                    int ny=j+y[l];

                    if(nx<0||nx>=n||ny<0||ny>=m) p++;

                    else if(cube[nx][ny]<k) p++;

                }

                cnt+=p;

            }

        }

    }

    cout<<cnt;

    return 0;

}