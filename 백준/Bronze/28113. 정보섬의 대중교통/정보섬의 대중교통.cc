#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main() {
    FAST_IO;
    int n,a,b;
    cin>>n>>a>>b;
    if(a>b) cout<<"Subway";
    else if(a<b) cout<<"Bus";
    else cout<<"Anything";
    return 0;
}