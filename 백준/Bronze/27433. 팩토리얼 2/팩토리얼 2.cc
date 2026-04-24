#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    long long n,k=1;
    cin>>n;
    while(n!=0){
        k*=n;
        n--;
    }
    cout<<k;
    return 0;
}