#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

vector<int> parent,ranks;
int V,E,res=0,cnt=0;

int find(int a){
    if(a==parent[a]) return a;
    else return find(parent[a]);
}

int merge(int a,int b){
    int p1=a;
    int p2=b;
    if(ranks[p1]>ranks[p2]) swap(p1,p2);
    else if(ranks[p1]==ranks[p2]) ranks[p2]++;
    parent[p1]=p2;
    return 0;
}

int main(){
    FAST_IO;
    cin>>V>>E;
    priority_queue<tuple<int,int,int>> pq;
    parent.resize(V+1);
    ranks.resize(V+1,1);
    for(int i=1;i<=V;i++) parent[i]=i;
    for(int i=0;i<E;i++){
        int a,b,c;
        cin>>a>>b>>c;
        pq.push({-c,a,b});
    }
    for(int i=0;i<E;i++){
        int node1=get<1>(pq.top());
        int node2=get<2>(pq.top());
        int cost=-get<0>(pq.top());
        pq.pop();
        int parent1=find(node1);
        int parent2=find(node2);
        if(parent1==parent2) continue;
        else{
            merge(parent1,parent2);
            res+=cost;
            cnt++;
        }
        if(cnt==V-1) break;
    }
    cout<<res;
    return 0;
}