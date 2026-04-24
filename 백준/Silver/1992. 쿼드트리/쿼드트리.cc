#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> sq;

int dc(int x,int y,int n){

    bool c=sq[x][y];

    for(int i=x;i<x+n;i++){

        for(int j=y;j<y+n;j++){

            if(c!=sq[i][j]) goto point;

        }

    }

    cout<<c;

    return 0;

    point:

    cout<<'(';

    dc(x,y,n/2);

    dc(x,y+n/2,n/2);

    dc(x+n/2,y,n/2);

    dc(x+n/2,y+n/2,n/2);

    cout<<')';

    return 0;

}

int main(){

    FAST_IO;

    int n;

    cin>>n;

    sq.resize(n);

    for(int i=0;i<n;i++){

        sq[i].resize(n);

        string s;

        cin>>s;

        for(int j=0;j<n;j++) sq[i][j]=s[j]-'0';

    }

    dc(0,0,n);

    return 0;

}