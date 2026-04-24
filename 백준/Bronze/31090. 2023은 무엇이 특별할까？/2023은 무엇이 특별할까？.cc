#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

void solve(){
    int n,m;
    cin>>n;
    m=n+1;
    n%=100;
    if(m%n==0) cout<<"Good"<<endl;
    else cout<<"Bye"<<endl;
    return;
}

int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t!=0){
        solve();
        t--;
    }
    return 0;
}