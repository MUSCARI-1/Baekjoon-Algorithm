#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int x1,y1,x2,y2,r1,r2;

    cin>>x1>>y1>>x2>>y2;

    if(x2-x1>x1) r1=x1;

    else r1=x2-x1;

    if(y2-y1>y1) r2=y1;

    else r2=y2-y1;

    if(r1>r2) cout<<r2;

    else cout<<r1;

    return 0;

}