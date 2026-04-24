#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

void solve(){
    int n,c,mod,cnt=0;
    cin>>n>>c;
    mod=n%c;
    cnt=n/c;
    if(mod!=0) cnt++;
    cout<<cnt<<endl;
}

int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solve();
    return 0;
}