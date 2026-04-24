#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m,r;

    cin>>n>>m>>r;

    vector<vector<int>> v(n+1);

    vector<bool> c(n+1,0);

    vector<int> res(n+1,0);

    for(int i=0;i<m;i++){

        int a,b;

        cin>>a>>b;

        v[a].push_back(b);

        v[b].push_back(a);

    }

    for(int i=1;i<=n;i++){

        if(v[i].size()==0) continue;

        sort(v[i].begin(),v[i].end());

    }

    queue<int> q;

    q.push(r);

    c[r]=1;

    res[r]=1;

    int cnt=2;

    while(q.size()!=0){

        int f=q.front();

        q.pop();

        for(int i=0;i<v[f].size();i++){

            if(c[v[f][i]]==0){

                c[v[f][i]]=1;

                q.push(v[f][i]);

                res[v[f][i]]=cnt;

                cnt++;

            }

        }

    }

    for(int i=1;i<=n;i++) cout<<res[i]<<"\n";

    return 0;

}