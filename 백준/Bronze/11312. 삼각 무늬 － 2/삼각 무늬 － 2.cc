#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

void solve(){
    long long a,b;
    cin>>a>>b;
    a*=a;
    b*=b;
    cout<<a/b<<endl;
    return;
}

int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solve();
    return 0;
}