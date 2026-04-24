#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int INF=123456789;

int main(){
    long long n,cnt=1;
    int b;
    cin>>n>>b;
    while(b>=0&&n>0){
        n-=cnt;
        cnt*=2;
        b--;
    }
    if(n>0) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
    return 0;
}
