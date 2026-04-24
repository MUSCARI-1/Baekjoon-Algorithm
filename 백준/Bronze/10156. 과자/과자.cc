#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main() {
    FAST_IO;
    int a,b,c;
    cin>>a>>b>>c;
    c=a*b-c;
    if(c<0) c=0;
    cout<<c;
    return 0;
}