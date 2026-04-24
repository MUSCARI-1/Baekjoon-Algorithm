#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

vector<int> parent(200000,0),size(200000,1),ranks(200000,1);

int find(int a){
    if(a==parent[a]) return a;
    return parent[a]=find(parent[a]);
}

int merge(int a,int b){
    parent[a]=b;
    if(ranks[a]==ranks[b]) ranks[b]++;
    size[b]+=size[a];
    cout<<size[b]<<"\n";
    return 0;
}

int solve(){
    unordered_map<string,int> num;
    int f;
    cin>>f;
    for(int i=0;i<f*2+1;i++) parent[i]=i;
    for(int i=0;i<f;i++){
        string s1,s2;
        cin>>s1>>s2;
        int a,b;
        if(num.count(s1)==0) num[s1]=num.size();
        a=num[s1];
        if(num.count(s2)==0) num[s2]=num.size();
        b=num[s2];
        int p1=find(a);
        int p2=find(b);
        if(p1==p2){
            cout<<size[p1]<<"\n";
            continue;
        }
        if(ranks[p1]>ranks[p2]) swap(p1,p2);
        merge(p1,p2);
    }
    return 0;
}

int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
        for(int i=0;i<200000;i++){
            parent[i]=i;
            size[i]=1;
            ranks[i]=1;
        }
    }
    return 0;
}