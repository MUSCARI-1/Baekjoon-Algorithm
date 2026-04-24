#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO;
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        int a=s[0]-'0';
        int b=s[2]-'0';
        cout<<a+b<<endl;
    }
    return 0;
}