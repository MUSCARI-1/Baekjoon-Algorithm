#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int solve(){

    map<string,int> fass;

    vector<int> num;

    int n;

    cin>>n;

    int cnt=1;

    for(int i=0;i<n;i++){

        string str;

        cin>>str>>str;

        if(fass.find(str)==fass.end()){

            fass[str]=1;

        }

        else{

            fass[str]++;

        }

    }

    for(auto a:fass){

        cnt*=(a.second+1);

    }

    cout<<cnt-1<<endl;

    return 0;

}

int main(){

    FAST_IO;

    int t;

    cin>>t;

    for(int i=0;i<t;i++) solve();

    return 0;

}