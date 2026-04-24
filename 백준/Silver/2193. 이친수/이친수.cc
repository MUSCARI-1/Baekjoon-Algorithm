#include <bits/stdc++.h> 
using namespace std;
#define FAST_IO ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<long long> cache(91,-1);

long long solve(int n){
    if(n<=2) return 1;
    if(cache[n]!=-1) return cache[n];
    long long cnt=0;
    for(int i=1;i<=n-2;i++) cnt+=solve(i);
    cache[n]=cnt+1;
    return cache[n];
}

int main(){
    FAST_IO;
    int n;
    cin>>n;
    cache[1]=1;
    cache[2]=1;
    cout<<solve(n);
    return 0;
}
