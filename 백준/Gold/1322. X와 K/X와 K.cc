#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main(){
    unsigned long long x,k,y=0,c=2147483648;
    vector<bool> v1(32,0),v2(32,0),v3(64,0);
    vector<bool> check(64,1);
    cin>>x>>k;
    for(int i=31;i>=0;i--){
        if(x>=c){
            v1[i]=1;
            x-=c;
        }
        if(k>=c){
            v2[i]=1;
            k-=c;
        }
        c/=2;
    }
    int p=0;
    for(int i=0;i<32;i++){
        if(v1[i]) check[i]=0;
    }
    for(int i=0;i<32;i++){
        while(!check[p]) p++;
        if(v2[i]) v3[p]=1;
        p++;
    }
    c=1;
    for(int i=0;i<64;i++){
        if(v3[i]) y+=c;
        c*=2;
    }
    cout<<y;
    return 0;
}