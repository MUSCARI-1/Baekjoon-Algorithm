#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    long long n,cnt=0;

    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){

        cin>>v[i];

    }

    long long plag=1024*1024;

    while(plag>=1){

        long long b0=0,b1=0;

        for(int i=0;i<n;i++){

            if((plag&v[i])>0) b1++;

            else b0++;

        }

        cnt+=b0*b1*plag;

        plag/=2;

    }

    cout<<cnt;

    return 0;

}