#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int a,b,cnt=0;

    cin>>a>>b;

    cnt+=a*b;

    cin>>a>>b;

    cnt+=a*b;

    cout<<cnt;

    return 0;

}