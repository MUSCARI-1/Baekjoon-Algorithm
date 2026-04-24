#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    FAST_IO;
    int a,b,cnt=0;
    cin>>a>>b;
    cout<<a/b;
    a%=b;
    if(a!=0) cout<<'.';
    while(a!=0){
        a*=10;
        cout<<a/b;
        a%=b;
        cnt++;
        if(cnt>1200) break;
    }
    return 0;
}