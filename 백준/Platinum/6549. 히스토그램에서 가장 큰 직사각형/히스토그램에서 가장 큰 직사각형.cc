#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

long long n;

vector<long long> v(100005);

long long dc(long long L,long long R){

    if(L==R) return v[L];

    long long mid=(L+R)/2;

    long long lr=max(dc(L,mid),dc(mid+1,R));

    long long le=mid;

    long long ri=mid+1;

    long long h=min(v[le],v[ri]);

    long long vol=(ri-le+1)*h;

    while(le>=L&&ri<=R){

        if(le==L&&ri==R) break;

        else if(le==L) ri++;

        else if(ri==R) le--;

        else{

            if(v[le-1]>v[ri+1]) le--;

            else ri++;

        }

        h=min({v[le],v[ri],h});

        long long now=(ri-le+1)*h;

        vol=max(now,vol);

    }

    return max(vol,lr);

}

int main(){

    FAST_IO;

    while(1){

        cin>>n;

        if(n==0) return 0;

        for(int i=0;i<n;i++) cin>>v[i];

        long long res=dc(0,n-1);

        cout<<res<<"\n";

    }

    return 0;

}