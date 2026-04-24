#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
    FAST_IO;
    int a,b,cnt=0;
    cin>>a>>b;
    int x=min(a,b)/10;
    cnt=a+b+x;
    cout<<cnt;
    return 0;
}