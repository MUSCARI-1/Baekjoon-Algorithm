#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m;

    long long result=0;

    cin>>n>>m;

    vector<long long> v(n);

    vector<long long> cnt(1000,0);

    for(int i=0;i<n;i++){

        cin>>v[i];

        v[i]%=m;

    }

    for(int i=1;i<n;i++) v[i]+=v[i-1];

    for(int i=0;i<n;i++) v[i]%=m;

    for(int i=0;i<n;i++) cnt[v[i]]++;

    if(cnt[0]>0) result+=cnt[0];

    for(int i=0;i<1000;i++){

        if(cnt[i]>1) result+=(cnt[i]*(cnt[i]-1)/2);

    }

    cout<<result;

    return 0;

}