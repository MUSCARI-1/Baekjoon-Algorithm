#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

vector<int> v(10);

int solve(){
    for(int i=0;i<10;i++) cin>>v[i];
    sort(v.begin(),v.end(),greater<>());
    cout<<v[2]<<endl;
    return 0;
}

int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solve();
    return 0;
}