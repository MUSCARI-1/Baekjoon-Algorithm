#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int INF=123456789;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> v(n+m);
    for(int i=0;i<n+m;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n+m;i++) cout<<v[i]<<' ';
    return 0;
}
