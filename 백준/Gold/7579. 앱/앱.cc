#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF=987654321;

int main(){

    FAST_IO;

    long long n,m,result=INF;

    cin>>n>>m;

    vector<pair<long long,long long>> app(n);

    for(int i=0;i<n;i++){

        int k;

        cin>>k;

        app[i].first=k;

    }

    for(int i=0;i<n;i++){

        int k;

        cin>>k;

        app[i].second=k;

    }

    vector<vector<long long>> dp(n);

    for(int i=0;i<n;i++) dp[i].resize(10001,-1);

    for(int i=0;i<10001;i++){

        if(app[0].second>i) dp[0][i]=0;

        else dp[0][i]=app[0].first;

    }

    for(int i=1;i<n;i++){

        for(int j=0;j<10001;j++){

            long long cost=app[i].second;

            long long memory=app[i].first;

            dp[i][j]=dp[i-1][j];

            if(j-cost>=0){

                dp[i][j]=max(dp[i][j],dp[i-1][j-cost]+memory);

            }

            if(j>0){

                dp[i][j]=max(dp[i][j-1],dp[i][j]);

            }

        }

    }

    for(int i=0;i<10001;i++){

        if(dp[n-1][i]>=m){

            cout<<i;

            break;

        }

    }

    return 0;

}