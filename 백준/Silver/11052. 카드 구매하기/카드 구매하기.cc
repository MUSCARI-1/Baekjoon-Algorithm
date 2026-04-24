#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=1234567890;

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<int> cost(n+1);

    for(int i=1;i<=n;i++) cin>>cost[i];

    vector<int> highCost(n+1,0);

    for(int i=0;i<n;i++){

        for(int j=1;i+j<=n;j++){

            highCost[i+j]=max(highCost[i+j],highCost[i]+cost[j]);

        }

    }

    cout<<highCost[n];

    return 0;

}