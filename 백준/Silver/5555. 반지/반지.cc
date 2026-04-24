#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string ring;
int n,cnt=0;

void solve(){
    string s;
    cin>>s;
    for(int i=0;i<10;i++){
        for(int j=0;j<=ring.size();j++){
            if(j==ring.size()){
                cnt++;
                return;
            }
            if(ring[j]==s[(i+j)%10]) continue;
            else break;
        }
    }
    return;
}

int main(){
    FAST_IO;
    cin>>ring;
    cin>>n;
    for(int i=0;i<n;i++) solve();
    cout<<cnt;
    return 0;
}