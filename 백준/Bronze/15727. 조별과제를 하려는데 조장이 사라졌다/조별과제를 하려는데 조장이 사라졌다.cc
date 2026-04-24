#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    if(n%5==0) n/=5;

    else n=n/5+1;

    cout<<n;

    return 0;

}