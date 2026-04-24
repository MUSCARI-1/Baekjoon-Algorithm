#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<long long>> matrix(vector<vector<long long>> a,vector<vector<long long>> b){

    int m=1000000007;

    vector<vector<long long>> c(2);

    for(int i=0;i<2;i++){

        c[i].resize(2,0);

        for(int j=0;j<2;j++){

            for(int l=0;l<2;l++){

                c[i][j]+=a[i][l]*b[l][j];

                c[i][j]%=m;

            }

        }

    }

    return c;

}

vector<vector<long long>> fivo(vector<vector<long long>> f,long long n){

    if(n==1) return f;

    else if(n%2==0){

        auto v=fivo(f,n/2);

        v=matrix(v,v);

        return v;

    }

    else{

        auto v=matrix(fivo(f,n-1),f);

        return v;

    }

}

int main(){

    FAST_IO;

    long long k,n;

    cin>>k;

    if(k%2!=0) k-=1;

    n=k+1;

    vector<vector<long long>> f(2);

    for(int i=0;i<2;i++) f[i].resize(2,1);

    f[0][0]=0;

    if(k<=4){

        if(k==4) cout<<'4';

        else if(k==2) cout<<'1';

        else cout<<'0';

        return 0;

    }

    auto v=fivo(f,n-1);

    cout<<v[1][1]-1;

    return 0;

}