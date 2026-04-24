#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    int e,s,m,x=1,y=1,z=1,cnt=1;
    cin>>e>>s>>m;
    while(1){
        if(e==x&&s==y&&m==z) break;
        x++;
        y++;
        z++;
        cnt++;
        if(x==16) x=1;
        if(y==29) y=1;
        if(z==20) z=1;
    }
    cout<<cnt;
    return 0;
}