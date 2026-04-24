#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int INF=2147483647; // 10^9
long long INF_INF=9223372036854775807; // 10^18

int main(){
    FAST_IO
    int n,cnt=0,ptr=0,multi=1;
    cin>>n;
    vector<int> v(40,0);
    while(n!=0){
        if(n%2==1) v[ptr]=1;
        n>>=1;
        ptr++;
    }
    for(int i=ptr-1;i>=0;i--){
        if(v[i]==1) cnt+=multi;
        multi*=2;
    }
    cout<<cnt;
    return 0;
}
