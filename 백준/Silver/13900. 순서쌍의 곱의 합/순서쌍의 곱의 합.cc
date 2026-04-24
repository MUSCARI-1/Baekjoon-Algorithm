#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    long long n,res=0;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    auto sum=v;
    for(int i=n-2;i>0;i--) sum[i]+=sum[i+1];
    for(int i=0;i<n-1;i++) res+=v[i]*sum[i+1];
    cout<<res;
    return 0;
}