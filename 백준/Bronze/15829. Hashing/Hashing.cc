#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int m=1234567891;

long long p(int i){

    if(i==0) return 1;

    else return 31*p(i-1)%m;

}

int main(){

    FAST_IO;

    int n;

    long long cnt=0;

    cin>>n;

    string str;

    cin>>str;

    for(int i=0;i<n;i++){

        int k=str[i]-'0'-48;

        cnt+=k*p(i);

        cnt%=m;

    }

    cout<<cnt;

    return 0;

}