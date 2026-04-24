#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    long long n,cnt=0,mod=10;
    cin>>n;
    cnt+=n;
    while(n>=mod){
        cnt+=n-mod+1;
        mod*=10;
    }
    cout<<cnt;
    return 0;
}