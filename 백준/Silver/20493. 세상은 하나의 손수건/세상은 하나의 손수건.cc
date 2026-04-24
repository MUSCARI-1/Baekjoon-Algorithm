#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,t;

    cin>>n>>t;

    vector<pair<int,string>> turn;

    for(int i=0;i<n;i++){

        int a;

        string b;

        cin>>a>>b;

        turn.push_back({a,b});

    }

    int x=0,y=0,tp=0;

    int turning[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

    if(n==0){

        cout<<t<<" "<<y;

        return 0;

    }

    x+=turn[0].first;

    if(turn[0].second=="left") tp++;

    else tp=3;

    for(int i=1;i<n;i++){

        x+=(turn[i].first-turn[i-1].first)*turning[tp][0];

        y+=(turn[i].first-turn[i-1].first)*turning[tp][1];

        if(turn[i].second=="left") tp++;

        else tp--;

        if(tp==4) tp=0;

        else if(tp<0) tp+=4;

    }

    x+=(t-turn[n-1].first)*turning[tp][0];

    y+=(t-turn[n-1].first)*turning[tp][1];

    cout<<x<<" "<<y;

    return 0;

}