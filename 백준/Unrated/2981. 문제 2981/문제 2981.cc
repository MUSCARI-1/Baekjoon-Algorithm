#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int gcd(int a,int b){

    int r=a%b;

    if(r==0) return b;

    else return gcd(b,r);

}

int main(){

    FAST_IO;

    int n,minus,input;

    vector<int> num;

    cin>>n>>minus;

    for(int i=0;i<n-1;i++){

        cin>>input;

        num.push_back(abs(input-minus));

        minus=input;

    }

    int now_gcd=num[0];

    for(int i=1;i<num.size();i++){

        now_gcd=gcd(now_gcd,num[i]);

    }

    for(int i=2;i<=now_gcd/2;i++){

        if(now_gcd%i==0) cout<<i<<" ";

    }

    cout<<now_gcd;

    return 0;

}