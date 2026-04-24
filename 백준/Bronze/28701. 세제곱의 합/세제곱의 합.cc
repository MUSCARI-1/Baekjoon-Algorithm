#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main() {
    FAST_IO;
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++) cnt+=i;
    cout<<cnt<<endl;
    cnt*=cnt;
    cout<<cnt<<endl<<cnt<<endl;
    return 0;
}