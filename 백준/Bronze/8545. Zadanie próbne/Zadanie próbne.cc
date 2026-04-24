#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string s;

    cin>>s;

    for(int i=s.size()-1;i>=0;i--) cout<<s[i];

    return 0;

}