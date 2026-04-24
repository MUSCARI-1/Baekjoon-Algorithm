#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,k;

    cin>>n>>k;

    vector<int> v(n);

    vector<bool> c(n,0);

    c[0]=1;

    for(int i=0;i<n;i++) cin>>v[i];

    for(int i=0;i<n-1;i++){

        if(!c[i]) continue;

        for(int j=i+1;j<n;j++){

            int need=(abs(v[j]-v[i])+1)*(j-i);

            if(need<=k) c[j]=1;

        }

    }

    if(c[n-1]) cout<<"YES";

    else cout<<"NO";

    return 0;

}