#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    vector<long long> v(1000001);
    v[1]=1;
    v[2]=2;
    v[3]=4;
    for(int i=4;i<1000001;i++)
        v[i]=(v[i-1]+v[i-2]+v[i-3])%1000000009;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        cout<<v[k]<<"\n";
    }
    return 0;
}