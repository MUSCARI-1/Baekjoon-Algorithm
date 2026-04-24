#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

vector<vector<int>> v;

vector<int> indegree;

vector<bool> visited;

priority_queue<int> pq;

queue<int> path;

int n,m;

int main(){

    FAST_IO;

    cin>>n>>m;

    v.resize(n+1);

    visited.resize(n+1,0);

    indegree.resize(n+1,0);

    for(int i=0;i<m;i++){

        int a,b;

        cin>>a>>b;

        v[a].push_back(b);

        indegree[b]++;

    }

    for(int i=1;i<=n;i++){

        if(indegree[i]==0){

            visited[i]=1;

            pq.push(-i);

        }

    }

    while(pq.size()!=0){

        int now=-pq.top();

        pq.pop();

        for(int i=0;i<v[now].size();i++){

            int next=v[now][i];

            indegree[next]--;

            if(indegree[next]==0){

                visited[next]=1;

                pq.push(-next);

            }

        }

        path.push(now);

    }

    while(path.size()!=0){

        cout<<path.front()<<' ';

        path.pop();

    }

    return 0;

}