#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int INF=123456789;
long long INF_INF=9223372036854775807;

void solve(){
    long long a,b,c,res=INF_INF,now=0;
    cin>>a>>b>>c;
    now+=a*a;
    now+=(b+c)*(b+c);
    res=min(now,res);
    now=0;
    now+=b*b;
    now+=(c+a)*(a+c);
    res=min(now,res);
    now=0;
    now+=c*c;
    now+=(a+b)*(b+a);
    res=min(now,res);
    cout<<res<<"\n";
    return;
}

int main(){
    FAST_IO
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solve();
    return 0;
}
