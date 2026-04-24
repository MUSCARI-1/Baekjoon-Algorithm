#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    FAST_IO;
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> S(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    S[0]=v[0];
    int cnt=v[0];
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[i]>v[j]) S[i]=max(S[i],v[i]+S[j]);
        }
        S[i]=max(S[i],v[i]);
        cnt=max(S[i],cnt);
    }
    cout<<cnt;
    return 0;
}