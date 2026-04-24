#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string s;

    int a,b;

    cin>>s;

    if(s.size()==1){

        cout<<"0.0";

        return 0;

    }

    if(s[0]=='A') a=4;

    else if(s[0]=='B') a=3;

    else if(s[0]=='C') a=2;

    else if(s[0]=='D') a=1;

    if(s[1]=='0') cout<<a<<".0";

    else if(s[1]=='+') cout<<a<<".3";

    else cout<<a-1<<".7";

    return 0;

}