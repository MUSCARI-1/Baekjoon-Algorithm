#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int solve(){
    int n,cnt=0;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    vector<bool> c(n+1,0);
    for(int i=1;i<=n;i++){
        if(c[i]) continue;
        else if(i==v[i]){
            cnt++;
            continue;
        }
        int point=i;
        while(!c[point]){
            c[point]=1;
            point=v[point];
        }
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solve();
    return 0;
}
