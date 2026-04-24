#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int main() {
    FAST_IO;
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for (int i=1;i<=n;i++) {
        if (n%i==0) v.push_back(i);
    }
    if (k>v.size()) cout<<0<<endl;
    else cout<<v[k-1]<<endl;

    return 0;
}