#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST_IO;
    int n;
    cin>>n;
    vector<pair<int,int>> query;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        query.push_back({k,1});
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(query[j].first<query[i].first) query[i].second+=query[j].second;
            query[i].second%=998244353;
        }
    }
    for(int i=0;i<n;i++) cout<<query[i].second<<' ';
    return 0;
}