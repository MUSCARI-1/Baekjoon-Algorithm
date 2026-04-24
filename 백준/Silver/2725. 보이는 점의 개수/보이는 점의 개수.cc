#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> v(1001,-1);

int gcd(int a,int b){

    int r=a%b;

    if(r==0) return b;

    else return gcd(b,r);

}

void solve(){

    int cnt=3;

    v[1]=3;

    int k=0;

    for(int i=2;i<=1000;i++){

        for(int j=1;j<i;j++){

            int r=gcd(i,j);

            if(r==1) k++;

        }

        v[i]=k*2+cnt;

    }

    return;

}

int main(){

    FAST_IO;

    int t;

    cin>>t;

    solve();

    for(int i=0;i<t;i++){

        int n;

        cin>>n;

        cout<<v[n]<<"\n";

    }

    return 0;

}