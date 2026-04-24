#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    int n;
    cin>>n;
    vector<pair<int,int>> sche;
    vector<int> cnt(n+1,0);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        sche.push_back({a,b});
    }
    for(int i=0;i<n;i++){
        int nx=i+sche[i].first;
        cnt[i+1]=max(cnt[i],cnt[i+1]);
        if(nx>n) continue;
        cnt[nx]=max(cnt[nx],cnt[i]+sche[i].second);
    }
    cout<<cnt[n];
    return 0;
}