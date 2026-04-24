#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int t,d,n,s,p;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>d>>n>>s>>p;
        if(d+p*n>s*n) cout<<"do not parallelize"<<endl;
        else if(d+p*n<s*n) cout<<"parallelize"<<endl;
        else cout<<"does not matter"<<endl;
    }
    return 0;
}