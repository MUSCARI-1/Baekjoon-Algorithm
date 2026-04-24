#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    vector<int> v(31,0);

    for(int i=1;i<29;i++){

        int k;

        cin>>k;

        v[k]=1;

    }

    for(int i=1;i<31;i++) if(v[i]==0) cout<<i<<endl;

    return 0;

}