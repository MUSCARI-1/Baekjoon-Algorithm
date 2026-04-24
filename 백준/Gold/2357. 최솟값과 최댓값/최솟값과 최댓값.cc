#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=1234567890;

int n,m;

vector<int> arr;

vector<int> segmentLow,segmentHigh;

int makeLow(int node,int left,int right){

    if(left==right) return segmentLow[node]=arr[left];

    int mid=(left+right)/2;

    int l=makeLow(node*2,left,mid);

    int r=makeLow(node*2+1,mid+1,right);

    return segmentLow[node]=min(l,r);

}

int makeHigh(int node,int left,int right){

    if(left==right) return segmentHigh[node]=arr[left];

    int mid=(left+right)/2;

    int l=makeHigh(node*2,left,mid);

    int r=makeHigh(node*2+1,mid+1,right);

    return segmentHigh[node]=max(l,r);

}

int queryLow(int node,int left,int right,int nodeLeft,int nodeRight){

    if(right<nodeLeft||nodeRight<left) return INF;

    if(left<=nodeLeft&&nodeRight<=right) return segmentLow[node];

    int mid=(nodeLeft+nodeRight)/2;

    return min(queryLow(node*2,left,right,nodeLeft,mid),queryLow(node*2+1,left,right,mid+1,nodeRight));

}

int queryHigh(int node,int left,int right,int nodeLeft,int nodeRight){

    if(right<nodeLeft||nodeRight<left) return -INF;

    if(left<=nodeLeft&&nodeRight<=right) return segmentHigh[node];

    int mid=(nodeLeft+nodeRight)/2;

    return max(queryHigh(node*2,left,right,nodeLeft,mid),queryHigh(node*2+1,left,right,mid+1,nodeRight));

}

int main(){

    FAST_IO;

    cin>>n>>m;

    arr.resize(n);

    for(int i=0;i<n;i++) cin>>arr[i];

    segmentLow.resize(4*n,INF);

    segmentHigh.resize(4*n,-INF);

    makeLow(1,0,n-1);

    makeHigh(1,0,n-1);

    for(int i=0;i<m;i++){

        int a,b;

        cin>>a>>b;

        cout<<queryLow(1,a-1,b-1,0,n-1)<<" "<<queryHigh(1,a-1,b-1,0,n-1)<<"\n";

    }

    return 0;

}