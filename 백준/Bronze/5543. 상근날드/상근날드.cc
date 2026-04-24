#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int a,b,c,c1,c2;

    cin>>a>>b>>c;

    c1=min({a,b,c});

    cin>>a>>b;

    c2=min(a,b);

    c1+=c2-50;

    cout<<c1;

    return 0;

}