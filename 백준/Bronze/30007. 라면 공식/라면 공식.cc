#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main() {
    FAST_IO;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,x;
        cin>>a>>b>>x;
        cout<<a*(x-1)+b<<endl;
    }
    return 0;
}