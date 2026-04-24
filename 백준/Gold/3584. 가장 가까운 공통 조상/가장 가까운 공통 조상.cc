#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int n;

int find(vector<bool> &node1_ancestor,vector<int> parent,int a){
    if(parent[a]==-1){
        node1_ancestor[a]=1;
        return 0;
    }
    else{
        node1_ancestor[a]=1;
        return find(node1_ancestor,parent,parent[a]);
    }
}

int ancestorFind(vector<int> parent,int node1,int node2){
    vector<bool> node1_ancestor(n+1,0);
    find(node1_ancestor,parent,node1);
    while(!node1_ancestor[node2]){
        node2=parent[node2];
    }
    return node2;
}

int solve(){
    int node1,node2;
    cin>>n;
    vector<int> parent(n+1,-1);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        parent[b]=a;
    }
    cin>>node1>>node2;
    return ancestorFind(parent,node1,node2);
}

int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++) cout<<solve()<<endl;
    return 0;
}