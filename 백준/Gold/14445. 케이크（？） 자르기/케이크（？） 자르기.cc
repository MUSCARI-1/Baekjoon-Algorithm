#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    long long n;
    cin>>n;
    if(n==1) n=0;
    else if(n%2==1) n=n/2+1;
    else n/=2;
    cout<<n;
    return 0;
}