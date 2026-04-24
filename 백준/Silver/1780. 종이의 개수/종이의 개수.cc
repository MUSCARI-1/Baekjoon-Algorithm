#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> sq;

int cnt1=0;

int cnt2=0;

int cnt3=0;

int dc(int x,int y,int n){

    int c=sq[x][y];

    for(int i=x;i<x+n;i++){

        for(int j=y;j<y+n;j++){

            if(c!=sq[i][j]) goto point;

        }

    }

    if(c==-1) cnt1++;

    else if(c==0) cnt2++;

    else cnt3++;

    return 0;

    point:

    dc(x,y,n/3);

    dc(x,y+n/3,n/3);

    dc(x,y+2*n/3,n/3);

    dc(x+n/3,y,n/3);

    dc(x+n/3,y+n/3,n/3);

    dc(x+n/3,y+2*n/3,n/3);

    dc(x+2*n/3,y,n/3);

    dc(x+2*n/3,y+n/3,n/3);

    dc(x+2*n/3,y+2*n/3,n/3);

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

    cout<<cnt1<<endl<<cnt2<<endl<<cnt3;

    return 0;

}