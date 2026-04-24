#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int a,b,c,res=0;
    cin>>a>>b>>c;
    res=(a+1)*(b+1)/(c+1)-1;
    cout<<res;
    return 0;
}