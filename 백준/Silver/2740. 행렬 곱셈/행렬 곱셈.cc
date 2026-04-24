#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m,k;

    cin>>n>>m;

    vector<vector<int>> a(n),b(m),c(n);

    for(int i=0;i<n;i++){

        a[i].resize(m);

        for(int j=0;j<m;j++) cin>>a[i][j];

    }

    cin>>m>>k;

    for(int i=0;i<m;i++){

        b[i].resize(k);

        for(int j=0;j<k;j++) cin>>b[i][j];

    }

    for(int i=0;i<n;i++){

        c[i].resize(k,0);

        for(int j=0;j<k;j++){

            for(int l=0;l<m;l++) c[i][j]+=a[i][l]*b[l][j];

            cout<<c[i][j]<<" ";

        }

        cout<<endl;

    }

    return 0;

}