#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    vector<int> v(3);

    for(int i=0;i<3;i++) cin>>v[i];

    sort(v.begin(),v.end());

    for(int i=0;i<3;i++) cout<<v[i]<<" ";

    return 0;

}