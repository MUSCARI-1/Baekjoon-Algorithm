#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<vector<int>> v;

    v.resize(n);

    for(int i=0;i<n;i++){

        v[i].resize(3);

        for(int j=0;j<3;j++) cin>>v[i][j];

    }

    for(int i=1;i<n;i++){

        v[i][0]+=min(v[i-1][1],v[i-1][2]);

        v[i][1]+=min(v[i-1][2],v[i-1][0]);

        v[i][2]+=min(v[i-1][0],v[i-1][1]);

    }

    cout<<min({v[n-1][0],v[n-1][1],v[n-1][2]});

    return 0;

}