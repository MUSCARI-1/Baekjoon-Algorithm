#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,cnt=0,k;

    cin>>n;

    for(int i=0;i<n;i++){

        cin>>k;

        cnt+=k;

    }

    cout<<cnt;

    return 0;

}