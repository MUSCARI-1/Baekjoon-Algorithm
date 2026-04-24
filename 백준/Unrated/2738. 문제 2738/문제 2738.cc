#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m;

    cin>>n>>m;

    vector<vector<int>> v(n);

    for(int i=0;i<n;i++){

        v[i].resize(m);

        for(int j=0;j<m;j++) cin>>v[i][j];

    }

    for(int i=0;i<n;i++){

        int k;

        for(int j=0;j<m;j++){

            cin>>k;

            v[i][j]+=k;

        }

    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++) cout<<v[i][j]<<" ";

        cout<<endl;

    }

    return 0;

}