#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,k;

    int now=0;

    cin>>n>>k;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    for(int i=0;i<k;i++) now+=v[i];

    int result=now;

    for(int i=k;i<n;i++){

        now=now-v[i-k]+v[i];

        result=max(result,now);

    }

    cout<<result;

    return 0;

}