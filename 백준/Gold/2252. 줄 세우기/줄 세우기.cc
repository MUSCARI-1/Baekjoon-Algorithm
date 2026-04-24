#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
vector<vector<int>> v;
vector<bool> visited;
deque<int> path;
int n,m;

int dfs(int k){
    visited[k]=1;
    for(int i=0;i<v[k].size();i++){
        int next=v[k][i];
        if(!visited[next]){
            dfs(next);
        }
    }
    path.push_front(k);
    return 0;
}

int main(){
    FAST_IO;
    cin>>n>>m;
    v.resize(n+1);
    visited.resize(n+1,0);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]) dfs(i);
    }
    int s=path.size();
    for(int i=0;i<s;i++){
        cout<<path.front()<<' ';
        path.pop_front();
    }
    return 0;
}
