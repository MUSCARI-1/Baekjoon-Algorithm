#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO;
    int n,d;
    cin>>n>>d;
    vector<int> dp(10001);
    vector<tuple<int,int,int>> road;
    for(int i=0;i<10001;i++) dp[i]=i;
    for(int i=0;i<n;i++){
        int s,e,dist;
        cin>>s>>e>>dist;
        road.push_back({e,s,dist});
    }
    sort(road.begin(),road.end());
    for(int i=0;i<n;i++){
        int s=get<1>(road[i]);
        int e=get<0>(road[i]);
        int dist=get<2>(road[i]);
        if(dp[e]>dp[s]+dist){
            dp[e]=dp[s]+dist;
            for(int i=e+1;i<=d;i++) dp[i]=dp[i-1]+1;
        }
    }
    cout<<dp[d];
    return 0;
}