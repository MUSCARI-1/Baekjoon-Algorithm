#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> a,c;

int n;

long long b;

vector<vector<int>> matrix(vector<vector<int>> x,vector<vector<int>> y){

    vector<vector<int>> z(n);

    for(int i=0;i<n;i++){

        z[i].resize(n,0);

        for(int j=0;j<n;j++){

            for(int l=0;l<n;l++) z[i][j]+=x[i][l]*y[l][j];

            z[i][j]%=1000;

        }

    }

    return z;

}

vector<vector<int>> dc(vector<vector<int>> k,long long x){

    if(x==1) return k;

    else if(x%2!=0){

        auto v=dc(k,x-1);

        return matrix(v,k);

    }

    else{

        auto v=dc(k,x/2);

        return matrix(v,v);

    }

}

int main(){

    FAST_IO;

    cin>>n>>b;

    a.resize(n);

    for(int i=0;i<n;i++){

        a[i].resize(n);

        for(int j=0;j<n;j++) cin>>a[i][j];

    }

    auto c=dc(a,b);

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            c[i][j]%=1000;

            cout<<c[i][j]<<" ";

        }

        cout<<endl;

    }

    return 0;

}