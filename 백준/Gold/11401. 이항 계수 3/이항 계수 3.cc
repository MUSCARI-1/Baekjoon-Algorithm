#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int p=1000000007;

long long fac(int k){

    long long n=1;

    if(k==1) return n;

    else{

        for(int i=2;i<=k;i++){

            n*=i;

            n%=p;

        }

    }

    return n;

}

long long dc(long long a,int k){

    if(k==1) return a;

    else if(k%2==0){

        long long n=dc(a,k/2);

        n*=n;

        n%=p;

        return n;

    }

    else{

        long long n=dc(a,k-1);

        n=(n*a)%p;

        return n;

    }

}

int main(){

    FAST_IO;

    long long n,k,r,a,res;

    cin>>n>>k;

    r=n-k;

    a=(fac(r)*fac(k))%p;

    res=dc(a,p-2);

    res=(fac(n)*res)%p;

    cout<<res;

    return 0;

}