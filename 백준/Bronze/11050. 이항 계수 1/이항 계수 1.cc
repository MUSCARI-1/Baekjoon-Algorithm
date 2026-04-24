#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int factorial(int n);

int result(int n,int k){

    int ans=factorial(n)/factorial(k)/factorial(n-k);

    return ans;

}

int factorial(int n){

    if(n<2) return 1;

    return n*factorial(n-1);

}

int main(){

    FAST_IO;

    int n,k;

    cin>>n>>k;

    cout<<result(n,k);

    return 0;

}