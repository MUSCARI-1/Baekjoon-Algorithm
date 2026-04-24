#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,cnt,k;

    cin>>n>>k;

    n*=8;

    k*=3;

    cnt=n+k-28;

    cout<<cnt;

    return 0;

}