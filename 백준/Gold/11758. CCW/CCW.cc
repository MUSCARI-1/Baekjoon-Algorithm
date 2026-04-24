#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int abx=x2-x1,aby=y2-y1,acx=x3-x1,acy=y3-y1;
    int z=abx*acy-aby*acx;
    if(z>0) cout<<'1';
    else if(z<0) cout<<"-1";
    else cout<<'0';
    return 0;
}
