#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,k;

    int cnt=0;

    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    cin>>k;

    for(int i=0;i<n;i++) if(v[i]==k) cnt++;

    cout<<cnt;

    return 0;

}