#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> v(9);

vector<int> search(int x,int y){

    vector<int> num;

    vector<bool> check(10,1);

    for(int i=0;i<9;i++){

        check[v[i][y]]=0;

        check[v[x][i]]=0;

    }

    int a=x/3*3;

    int b=y/3*3;

    for(int i=a;i<a+3;i++){

        for(int j=b;j<b+3;j++) check[v[i][j]]=0;

    }

    for(int i=1;i<=9;i++) if(check[i]) num.push_back(i);

    return num;

}

void solve(int x,int y){

    int i=x;

    int j=y;

    if(j>=9){

        x++;

        j-=9;

    }

    for(;i<9;i++){

        for(;j<9;j++){

            if(v[i][j]==0){

                vector<int> pos=search(i,j);

                for(int k=0;k<pos.size();k++){

                    v[i][j]=pos[k];

                    solve(i,j+1);

                    v[i][j]=0;

                }

                return;

            }

        }

        j=0;

    }

    for(i=0;i<9;i++){

        for(j=0;j<9;j++) cout<<v[i][j]<<" ";

        cout<<endl;

    }

    exit(0);

}

int main(){

    FAST_IO;

    for(int i=0;i<9;i++){

        v[i].resize(9);

        for(int j=0;j<9;j++) cin>>v[i][j];

    }

    solve(0,0);

    return 0;

}