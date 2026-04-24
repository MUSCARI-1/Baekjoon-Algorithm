#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

vector<int> parent,ranks;
vector<vector<int>> v;
vector<bool> plan(201,0);
int n,m;

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

int add(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(v[i][j]==0) continue;
            int parentA=root(i);
            int parentB=root(j);
            merge(parentA,parentB);
        }
    }
    return 0;
}

int main(){
    FAST_IO;
    cin>>n>>m;
    parent.resize(201);
    ranks.resize(201,1);
    for(int i=0;i<=200;i++) parent[i]=i;
    v.resize(201);
    for(int i=1;i<=n;i++){
        v[i].resize(201,0);
        for(int j=1;j<=n;j++) cin>>v[i][j];
    }
    add();
    for(int i=0;i<m;i++){
        int r;
        cin>>r;
        plan[r]=1;
    }
    int c=-1;
    for(int i=1;i<201;i++){
        if(plan[i]){
            int k=root(i);
            if(c==-1) c=k;
            else{
                if(c!=k){
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES";
    return 0;
}