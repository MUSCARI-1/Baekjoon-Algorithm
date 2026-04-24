#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    vector<vector<long long>> v(100001);
    for(int i=0;i<100001;i++) v[i].resize(4,0);
    v[1][1]=1;
    v[2][2]=1;
    for(int i=1;i<4;i++) v[3][i]=1;
    for(int i=4;i<100001;i++){
        v[i][1]=(v[i-1][2]+v[i-1][3])%1000000009;
        v[i][2]=(v[i-2][1]+v[i-2][3])%1000000009;
        v[i][3]=(v[i-3][1]+v[i-3][2])%1000000009;
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        long long res=(v[k][1]+v[k][2]+v[k][3])%1000000009;
        cout<<res<<"\n";
    }
    return 0;
}