#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
    FAST_IO
    long long n,k,cnt=0;
    cin>>n>>k;
    vector<long long> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=1;i<n;i++) v[i]=v[i]+v[i-1];
    sort(v.begin(),v.end(),greater<>());
    for(int i=0;i<k;i++) cnt+=v[i];
    cout<<cnt;
    return 0;
}