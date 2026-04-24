#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m;

    int cnt=0;

    set<string> s;

    cin>>n>>m;

    string str;

    for(int i=0;i<n;i++){

        cin>>str;

        s.insert(str);

    }

    for(int i=0;i<m;i++){

        cin>>str;

        if(s.find(str)!=s.end()) cnt++;

    }

    cout<<cnt;

    return 0;

}