#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int x,y,n;

    int result=0;

    vector<vector<int>> v(101);

    for(int i=0;i<101;i++){

        v[i].resize(101,0);

    }

    cin>>n;

    for(int i=0;i<n;i++){

        cin>>x>>y;

        for(int j=x;j<x+10;j++){

            for(int l=y;l<y+10;l++){

                v[j][l]=1;

            }

        }

    }

    for(int i=0;i<101;i++){

        for(int j=0;j<101;j++){

            if(v[i][j]==1) result++;

        }

    }

    cout<<result;

    return 0;

}