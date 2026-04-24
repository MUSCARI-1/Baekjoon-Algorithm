#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m;

    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    cin>>m;

    for(int i=0;i<m;i++){

        int k;

        cin>>k;

        cout<<binary_search(v.begin(),v.end(),k)<<"\n";

    }

    return 0;

}