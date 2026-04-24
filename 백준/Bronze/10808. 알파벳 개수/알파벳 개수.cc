#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string s;

    cin>>s;

    vector<int> al(27,0);

    for(int i=0;i<s.size();i++){

        al[s[i]-'\0'-97]++;

    }

    for(int i=0;i<26;i++) cout<<al[i]<<" ";

    return 0;

}