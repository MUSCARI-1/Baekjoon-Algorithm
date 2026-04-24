#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=1234567890;

int main(){

    FAST_IO;

    int n,k;

    double cnt=0;

    cout<<fixed;

    cout.precision(7);

    cin>>n;

    k=n;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){

        int o;

        cin>>o;

        v.push_back({o,1});

    }

    sort(v.begin(),v.end());

    int p=0;

    int vkf=(k+1)/2-1;

    cnt=v[vkf].first;

    while(k!=1){

        p++;

        k--;

        v[p].first+=v[p-1].first;

        v[p].second+=v[p-1].second;

        int vk=(k+1)/2-1+p;

        double m1=v[vk].first;

        double m2=v[vk].second;

        cnt=max(m1/m2,cnt);

    }

    cout<<cnt;

    return 0;

}