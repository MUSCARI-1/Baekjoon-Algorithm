#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    while(1){

        int cnt=0;

        cin>>n;

        if(n==0) return 0;

        for(;n>0;n--){

            cnt+=n;

        }

        cout<<cnt<<endl;

    }

    return 0;

}