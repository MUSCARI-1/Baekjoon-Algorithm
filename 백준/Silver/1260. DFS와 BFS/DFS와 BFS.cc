#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m,r;

int dfs(vector<vector<int>> v){

    vector<bool> c(n+1,0);

    queue<int> res;

    stack<int> s;

    for(int i=0;i<v[r].size();i++) s.push(v[r][i]);

    c[r]=1;

    res.push(r);

    while(s.size()!=0){

        int t=s.top();

        s.pop();

        if(c[t]==0){

            c[t]=1;

            res.push(t);

            for(int i=0;i<v[t].size();i++) s.push(v[t][i]);

        }

    }

    while(res.size()!=0){

        cout<<res.front()<<" ";

        res.pop();

    }

    return 0;

}

int bfs(vector<vector<int>> v){

    vector<bool> c(n+1,0);

    queue<int> res;

    queue<int> q;

    c[r]=1;

    res.push(r);

    q.push(r);

    while(q.size()!=0){

        int f=q.front();

        q.pop();

        for(int i=0;i<v[f].size();i++){

            if(c[v[f][i]]==0){

                c[v[f][i]]=1;

                res.push(v[f][i]);

                q.push(v[f][i]);

            }

        }

    }

    while(res.size()!=0){

        cout<<res.front()<<" ";

        res.pop();

    }

    return 0;

}

int main(){

    FAST_IO;

    cin>>n>>m>>r;

    vector<vector<int>> v(n+1);

    for(int i=0;i<m;i++){

        int a,b;

        cin>>a>>b;

        v[a].push_back(b);

        v[b].push_back(a);

    }

    for(int i=1;i<=n;i++){

        if(v[i].size()==0) continue;

        sort(v[i].begin(),v[i].end(),greater<>());

    }

    dfs(v);

    cout<<endl;

    for(int i=1;i<=n;i++){

        if(v[i].size()==0) continue;

        sort(v[i].begin(),v[i].end());

    }

    bfs(v);

    return 0;

}