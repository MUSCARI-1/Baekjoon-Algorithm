#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

vector<int> parent,ranks;

int root(int a){
    if(a==parent[a]) return a;
    else{
        return parent[a]=root(parent[a]);
    }
}

void merge(){
    int a,b;
    cin>>a>>b;
    int parentA=root(a);
    int parentB=root(b);
    if(parentA==parentB) return;
    if(ranks[parentA]>ranks[parentB]) swap(parentA,parentB);
    if(ranks[parentA]==ranks[parentB]) ranks[parentB]++;
    parent[parentA]=parentB;
    return;
}

string find(){
    int a,b;
    cin>>a>>b;
    int parentA=root(a);
    int parentB=root(b);
    if(parentA==parentB) return "yes";
    else return "no";
}

int main(){
    FAST_IO;
    int n,m;
    cin>>n>>m;
    parent.resize(n+1);
    ranks.resize(n+1,1);
    for(int i=0;i<=n;i++) parent[i]=i;
    for(int i=0;i<m;i++){
        int c;
        cin>>c;
        if(c==0) merge();
        else cout<<find()<<"\n";
    }
    return 0;
}