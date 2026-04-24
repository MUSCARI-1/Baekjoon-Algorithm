#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string s1,s2;

    cin>>s1>>s2;

    if(s1.size()>=s2.size()) cout<<"go";

    else cout<<"no";

    return 0;

}