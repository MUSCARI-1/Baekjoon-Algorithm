#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=1234567890;

int main(){

    FAST_IO;

    string s;

    cin>>s;

    int n=s.size(),z=0;

    vector<int> v,dp(s.size(),0);

    for(int i=0;i<n;i++) v.push_back(s[i]-'0');

    if(n==1){

        if(v[0]==0) cout<<z;

        else cout<<n;

        return 0;

    }

    if(v[0]==0||(v[0]>2&&v[1]==0)){

        cout<<z;

        return 0;

    }

    else{

        dp[0]=1;

        int i1=v[0]*10+v[1];

        if(v[1]==0||i1>26) dp[1]=1;

        else dp[1]=2;

    }

    for(int i=2;i<n;i++){

        if(v[i]==0){

            if(v[i-1]>2||v[i-1]==0){

                cout<<z;

                return 0;

            }

            else dp[i]=dp[i-2];

        }

        else{

            if(v[i-1]==0||v[i-1]*10+v[i]>26) dp[i]=dp[i-1];

            else dp[i]=(dp[i-1]+dp[i-2])%1000000;

        }

    }

    cout<<dp[n-1];

    return 0;

}