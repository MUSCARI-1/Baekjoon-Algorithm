#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

long long fact(int n,int x){

    int num=0;

    for(long long i=x;n/i>=1;i*=x) num+=n/i;

    return num;

}

int main(){

    FAST_IO;

    int n,r;

    cin>>n>>r;

    int two=fact(n,2)-fact(n-r,2)-fact(r,2);

    int five=fact(n,5)-fact(n-r,5)-fact(r,5);

    int res=min(two,five);

    cout<<res;

    return 0;

}