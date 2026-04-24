#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int a,b,c,d,x,y,r;
    cin>>a>>b>>c>>d>>x>>y>>r;
    if(x==a) cout<<'1'<<endl;
    else if(x==b) cout<<'2'<<endl;
    else if(x==c) cout<<'3'<<endl;
    else if(x==d) cout<<'4'<<endl;
    else cout<<'0'<<endl;
    return 0;
}