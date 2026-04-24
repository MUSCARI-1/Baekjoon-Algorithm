#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<long long> f(1'000'001,0);

void solve(){
    for(int i=1;i<=1'000'000;i++){
        int pnt=i;
        while(pnt<=1'000'000){
            f[pnt]+=i;
            pnt+=i;
        }
    }
    for(int i=1;i<1'000'000;i++) f[i+1]=f[i]+f[i+1];
}

int main(){
    FAST_IO
    int t;
    cin>>t;
    solve();
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<f[n]<<"\n";
    }
    return 0;
}