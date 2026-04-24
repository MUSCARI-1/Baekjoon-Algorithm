#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int t,s;
    cin>>t>>s;
    if(t>=12&&t<=16&&s==0) cout<<320;
    else cout<<280;
    return 0;
}