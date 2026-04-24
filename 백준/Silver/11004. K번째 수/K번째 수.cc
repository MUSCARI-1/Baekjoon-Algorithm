#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=1234567890;

int main(){

    FAST_IO;

    int n,k;

    cin>>n>>k;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    cout<<v[k-1];

    return 0;

}