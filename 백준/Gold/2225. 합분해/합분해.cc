#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int INF=1234567890;
int mod=1000000000;

int main(){
    FAST_IO;
    int n,k;
    cin>>n>>k;
    vector<vector<int>> v(201);
    for(int i=1;i<=200;i++){
        v[i].resize(201,-1);
        v[1][i]=i;
        v[i][1]=1;
    }
    for(int i=2;i<=200;i++){
        for(int j=2;j<=200;j++){
            v[i][j]=(v[i-1][j]+v[i][j-1])%mod;
        }
    }
    cout<<v[n][k];
    return 0;
}