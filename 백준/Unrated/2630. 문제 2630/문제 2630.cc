#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> sq;

int w=0;

int b=0;

int dc(int x,int y,int n){

    bool c=sq[x][y];

    for(int i=x;i<x+n;i++){

        for(int j=y;j<y+n;j++){

            if(c!=sq[i][j]) goto point;

        }

    }

    if(!c) w++;

    else b++;

    return 0;

    point:

    dc(x,y,n/2);

    dc(x,y+n/2,n/2);

    dc(x+n/2,y,n/2);

    dc(x+n/2,y+n/2,n/2);

    return 0;

}

int main(){

    FAST_IO;

    int n;

    cin>>n;

    sq.resize(n);

    for(int i=0;i<n;i++){

        sq[i].resize(n);

        for(int j=0;j<n;j++) cin>>sq[i][j];

    }

    dc(0,0,n);

    cout<<w<<endl<<b;

    return 0;

}