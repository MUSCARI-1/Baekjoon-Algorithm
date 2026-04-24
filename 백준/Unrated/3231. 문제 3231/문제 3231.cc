#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    int n,cnt=0;
    vector<pair<int,int>> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back({k,i});
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++){
        if(v[i].second<v[i-1].second) cnt++;
    }
    cout<<cnt;
    return 0;
}