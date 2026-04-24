#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int n,m;
vector<int> v;
vector<vector<int>> dp(2001);

bool solve(int i,int j){
    if(v[i]!=v[j]) return 0;
    if(i==j) return 1;
    if(dp[i+1][j-1]==-1) dp[i+1][j-1]=solve(i+1,j-1);
    if(dp[i+1][j-1]==0) return 0;
    else return 1;
}

int main(){
    FAST_IO;
    cin>>n;
    v.resize(n+1,INF);
    for(int i=1;i<=n;i++) cin>>v[i];
    cin>>m;
    for(int i=0;i<2001;i++) dp[i].resize(2001,-1);
    for(int i=1;i<=n;i++){
        dp[i][i]=1;
        if(i==n) continue;
        if(v[i]==v[i+1]) dp[i][i+1]=1;
        else dp[i][i+1]=0;
    }
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(dp[i][j]==-1) dp[i][j]=solve(i,j);
        }
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        cout<<dp[a][b]<<"\n";
    }
    return 0;
}