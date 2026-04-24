#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int t;

int k=0;

vector<vector<int>> draw;

int star(int n,int x,int y){

    if(n==1){

        for(int i=0;i<3;i++){

            for(int j=0;j<3;j++){

                if(i==1&&j==1) continue;

                else draw[x+i][y+j]=1;

            }

        }

        return 0;

    }

    else{

        for(int i=0;i<3;i++){

            for(int j=0;j<3;j++){

                if(i==1&&j==1) continue;

                else{

                    int nx=x+pow(3,(n-1))*i;

                    int ny=y+pow(3,(n-1))*j;

                    star(n-1,nx,ny);

                }

            }

        }

        return 0;

    }

    return 0;

}

int main(){

    FAST_IO;

    cin>>t;

    int a=t;

    draw.resize(t);

    for(int i=0;i<t;i++) draw[i].resize(t);

    while(t!=1){

        t=t/3;

        k++;

    }

    star(k,0,0);

    for(int i=0;i<a;i++){

        for(int j=0;j<a;j++){

            if(draw[i][j]==1) cout<<'*';

            else cout<<" ";

        }

        cout<<endl;

    }

}