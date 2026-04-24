#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    long long n,cnt=0;

    vector<pair<long long,long long>> v;

    cin>>n;

    for(int i=0;i<n;i++){

        long long x,y;

        cin>>x>>y;

        v.push_back({x,y});

    }

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            for(int k=j+1;k<n;k++){

                long long d1,d2,d3;

                d1=(v[i].first-v[j].first)*(v[i].first-v[j].first)

                +(v[i].second-v[j].second)*(v[i].second-v[j].second);

                d2=(v[j].first-v[k].first)*(v[j].first-v[k].first)

                +(v[j].second-v[k].second)*(v[j].second-v[k].second);

                d3=(v[k].first-v[i].first)*(v[k].first-v[i].first)

                +(v[k].second-v[i].second)*(v[k].second-v[i].second);

                long long high=max({d1,d2,d3});

                if(high+high==d1+d2+d3) cnt++;

            }

        }

    }

    cout<<cnt;

    return 0;

}