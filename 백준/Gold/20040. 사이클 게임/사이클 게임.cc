#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

vector<int> parent,ranks;
int res=0;

int root(int a){
    if(a==parent[a]) return a;
    else{
        return parent[a]=root(parent[a]);
    }
}

void merge(int a,int b){
    if(a==b) return;
    if(ranks[a]>ranks[b]) swap(a,b);
    if(ranks[a]==ranks[b]) ranks[b]++;
    parent[a]=b;
    return;
}

int addFind(int k){
    int a,b;
    cin>>a>>b;
    if(res!=0) return 0;
    int parentA=root(a);
    int parentB=root(b);
    if(parentA==parentB){
        res=k;
        return 0;
    }
    merge(parentA,parentB);
    return 0;
}

int main(){
    FAST_IO;
    int n,m;
    cin>>n>>m;
    parent.resize(n);
    ranks.resize(n,1);
    for(int i=0;i<n;i++) parent[i]=i;
    for(int i=0;i<m;i++) addFind(i+1);
    cout<<res;
    return 0;
}