#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<vector<int>> dp(2);
    dp[0].resize(n);
    dp[1].resize(n);
    dp[0][0]=v[0];
    dp[1][0]=v[0];
    for(int i=1;i<n;i++){
        dp[0][i]=max(dp[0][i-1]+v[i],v[i]);
        dp[1][i]=max(dp[0][i-1],dp[1][i-1]+v[i]);
    }
    int res=-1234567890;
    for(int i=0;i<n;i++)
        res=max({dp[0][i],dp[1][i],res});
    cout<<res;
    return 0;
}