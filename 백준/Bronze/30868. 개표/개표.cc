#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int INF=123456789;

void solve(){
    int k,a,b;
    cin>>k;
    a=k/5;
    b=k%5;
    for(int i=0;i<a;i++) cout<<"++++ ";
    for(int i=0;i<b;i++) cout<<"|";
    cout<<endl;
    return;
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) solve();
    return 0;
}
