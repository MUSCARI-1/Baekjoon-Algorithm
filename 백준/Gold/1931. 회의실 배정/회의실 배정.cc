#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,a,b;

    int cnt=0;

    int point=0;

    cin>>n;

    vector<pair<int,int>> time;

    for(int i=0;i<n;i++){

        cin>>a>>b;

        time.push_back({b,a});

    }

    sort(time.begin(),time.end());

    for(int i=0;i<n;i++){

        if(point<=time[i].second){

            point=time[i].first;

            cnt++;

        }

    }

    cout<<cnt;

    return 0;

}