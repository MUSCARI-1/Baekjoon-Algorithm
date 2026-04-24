#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=1234567890;

int main(){

    FAST_IO;

    string s;

    cin>>s;

    vector<string> v;

    for(int i=0;i<s.size();i++){

        string k;

        for(int j=i;j<s.size();j++){

            k.push_back(s[j]);

        }

        v.push_back(k);

    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++) cout<<v[i]<<"\n";

    return 0;

}