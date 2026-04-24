#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
    FAST_IO;
    int k;
    cin>>k;
    int high=k;
    while(k!=1){
        if(k%2!=0){
            k=k*3+1;
            if(high<k) high=k;
        }
        else k/=2;
    }
    cout<<high<<"\n";
    return;
}

int main(){
    FAST_IO;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) solve();
    return 0;
}