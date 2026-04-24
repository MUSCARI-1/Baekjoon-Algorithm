#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF=987654321;

int main(){

    FAST_IO;

    string s;

    cin>>s;

    int a=0,b=0,c=0;

    a=s.size();

    for(int i=0;i<a;i++){

        if(s[i]==':') b++;

        if(s[i]=='_') c++;

    }

    cout<<a+b+c*5;

    return 0;

}