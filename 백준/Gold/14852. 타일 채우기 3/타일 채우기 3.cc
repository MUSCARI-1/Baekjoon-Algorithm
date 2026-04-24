#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<long long> cache(1000001,-1);

long long mod=1000000007;

long long f(int n){

    if(cache[n]!=-1) return cache[n];

    cache[n]=(3*f(n-1)+f(n-2)-f(n-3))%mod;

    while(cache[n]<=0) cache[n]+=mod;

    return cache[n];

}

int main(){

    FAST_IO;

    int n;

    cin>>n;

    cache[1]=2;

    cache[2]=7;

    cache[3]=22;

    long long cnt=f(n);

    cout<<cnt;

    return 0;

}