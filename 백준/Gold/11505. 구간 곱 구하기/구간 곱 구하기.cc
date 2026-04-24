#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int INF=123456789;
int mod=1000000007;
long long n,m,k;
vector<long long> arr;
vector<long long> segment;

long long make(long long node,long long left,long long right){
    if(left==right) return segment[node]=arr[left];
    long long mid=(left+right)/2;
    long long leftSum=make(node*2,left,mid)%mod;
    long long rightSum=make(node*2+1,mid+1,right)%mod;
    return segment[node]=(leftSum*rightSum)%mod;
}

long long query(long long node,long long left,long long right,long long nodeLeft,long long nodeRight){
    if(right<nodeLeft||nodeRight<left) return 1;
    if(left<=nodeLeft&&nodeRight<=right) return segment[node];
    long long mid=(nodeLeft+nodeRight)/2;
    return (query(node*2,left,right,nodeLeft,mid)*query(node*2+1,left,right,mid+1,nodeRight))%mod;
}

long long change(long long node,long long nodeLeft,long long nodeRight,long long idx,long long newV){
    if(idx<nodeLeft||idx>nodeRight) return segment[node];
    if(nodeLeft==nodeRight) return segment[node]=newV;
    long long mid=(nodeLeft+nodeRight)/2;
    return segment[node]=(change(node*2,nodeLeft,mid,idx,newV)*change(node*2+1,mid+1,nodeRight,idx,newV))%mod;
}

int main(){
    FAST_IO;
    cin>>n>>m>>k;
    arr.resize(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    segment.resize(4*n,0);
    make(1,0,n-1);
    for(int i=0;i<m+k;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a==1) change(1,0,n-1,b-1,c);
        else cout<<query(1,b-1,c-1,0,n-1)<<"\n";
    }
    return 0;
}