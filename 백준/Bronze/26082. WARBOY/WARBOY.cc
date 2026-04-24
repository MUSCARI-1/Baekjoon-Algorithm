#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int a,b,c;

    cin>>a>>b>>c;

    b/=a;

    b*=3*c;

    cout<<b;

    return 0;

}