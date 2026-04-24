#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    long long n,m,cnt;

    cin>>n>>m;

    cnt=max(n,m);

    n=abs(m-n);

    cnt+=n;

    cout<<cnt;

    return 0;

}