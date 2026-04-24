#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m,b;

int low=123456789;

int height=999;

int solve(vector<vector<int>> v,int b,int h){

    int cnt=0;

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(v[i][j]>h){

                int d=v[i][j]-h;

                cnt+=d*2;

                b+=d;

            }

        }

    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(v[i][j]<h){

                int d=h-v[i][j];

                cnt+=d;

                b-=d;

            }

        }

    }

    if(b<0){

        cout<<low<<" "<<height;

        exit(0);

    }

    else{

        if(low>=cnt){

            low=cnt;

            height=h;

        }

        return 0;

    }

}

int main(){

    FAST_IO;

    cin>>n>>m>>b;

    vector<vector<int>> v(n);

    for(int i=0;i<n;i++){

        v[i].resize(m);

        for(int j=0;j<m;j++) cin>>v[i][j];

    }

    for(int i=0;i<=256;i++) solve(v,b,i);

    cout<<low<<" "<<height;

    return 0;

}