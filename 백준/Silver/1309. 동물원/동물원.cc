#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    vector<long long> v(100001);
    v[1]=3;
    v[2]=7;
    for(int i=3;i<100001;i++)
        v[i]=(2*v[i-1]+v[i-2])%9901;
    int n;
    cin>>n;
    cout<<v[n];
    return 0;
}