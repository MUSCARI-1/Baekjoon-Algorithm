#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m;

    cin>>n>>m;

    vector<vector<int>> v(4);

    for(int i=0;i<=3;i++) v[i].resize(8,1);

    for(int i=2;i<=4;i++) v[3][i]=i;

    v[3][5]=4;

    v[3][6]=4;

    v[3][7]=5;

    v[2][3]=2;

    v[2][4]=2;

    v[2][5]=3;

    v[2][6]=3;

    v[2][7]=4;

    if(n>=3&&m>=7) cout<<m-2;

    else if(n==1||m==1) cout<<v[0][0];

    else if(n>=3&&m<7) cout<<v[3][m];

    else if(n<3&&m>=7) cout<<v[2][7];

    else cout<<v[n][m];

    return 0;

}