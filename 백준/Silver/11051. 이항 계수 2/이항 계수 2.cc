#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,r;

    int cnt=0;

    cin>>n>>r;

    vector<vector<int>> dp;

    dp.resize(n+1);

    for(int i=0;i<n+1;i++){

        dp[i].resize(r+1);

        for(int j=0;j<r+1;j++) dp[i][j]=0;

    }

    dp[n][r]=1;

    for(int i=n;i>=0;i--){

        for(int j=r;j>=0;j--){

            if(dp[i][j]!=0){

                if(i==0||j==0||i==1||i==j) cnt+=dp[i][j];

                else if(j==1||i-j==1) cnt+=dp[i][j]*i;

                else{

                    dp[i-1][j-1]+=dp[i][j];

                    dp[i-1][j]+=dp[i][j];

                    if(dp[i-1][j-1]>=10007) dp[i-1][j-1]=dp[i-1][j-1]%10007;

                    if(dp[i-1][j]>=10007) dp[i-1][j]=dp[i-1][j]%10007;

                }

            }

            if(cnt>=10007) cnt=cnt%10007;

        }

    }

    cnt=cnt%10007;

    /*for(int i=0;i<n+1;i++){

        for(int j=0;j<r+1;j++){

            cout<<dp[i][j]<<" ";

        }

        cout<<endl;

    }*/

    cout<<cnt;

    return 0;

}