#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int result=1234567890;

vector<vector<int>> chess;

int brute(vector<vector<int>> chess,int a,int b){

    int cnt=0;

    bool check=0;

    for(int i=a;i<a+8;i++){

        if(!check) check=1;

        else check=0;

        for(int j=b;j<b+8;j++){

            if(!check){

                check=1;

                if(chess[i][j]==1) cnt++;

            }

            else{

                check=0;

                if(!chess[i][j]) cnt++;

            }

        }

    }

    if(cnt>32) cnt=64-cnt;

    if(result>cnt) result=cnt;

    return 0;

}

int main(){

    FAST_IO;

    int n,m;

    cin>>n>>m;

    chess.resize(n);

    for(int i=0;i<n;i++){

        chess[i].resize(m);

        for(int j=0;j<m;j++){

            char color;

            cin>>color;

            if(color=='W') chess[i][j]=0;

            else chess[i][j]=1;

        }

    }

    for(int i=0;i<=n-8;i++){

        for(int j=0;j<=m-8;j++) brute(chess,i,j);

    }

    cout<<result;

    return 0;

}