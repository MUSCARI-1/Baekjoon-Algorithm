#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    FAST_IO;
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> lis(n,1);
    for(int i=0;i<n;i++) cin>>v[i];
    int cnt=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[i]<v[j]) lis[i]=max(lis[i],lis[j]+1);
        }
        cnt=max(lis[i],cnt);
    }
    cout<<cnt;
    return 0;
}