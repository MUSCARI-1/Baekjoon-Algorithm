#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> v(31,-1);

long long f(long long n){

    if(v[n]!=-1) return v[n];

    v[n]=f(n-2)*4-f(n-4);

    return v[n];

}

int main(){

    FAST_IO;

    long long n,cnt=0;

    cin>>n;

    v[2]=3;

    v[4]=11;

    if(n%2!=0){

        cout<<cnt;

        return 0;

    }

    cnt=f(n);

    cout<<cnt;

    return 0;

}