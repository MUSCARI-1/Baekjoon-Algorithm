#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){

        int a,b;

        cin>>a>>b;

        v.push_back({b,a});

    }

    sort(v.begin(),v.end(),greater<>());

    int cost=v[0].first;

    for(int i=0;i<n;i++){

        cost=min(cost,v[i].first);

        int nc=cost-v[i].second;

        cost=nc;

    }

    if(cost<0) cout<<"-1";

    else cout<<cost;

    return 0;

}