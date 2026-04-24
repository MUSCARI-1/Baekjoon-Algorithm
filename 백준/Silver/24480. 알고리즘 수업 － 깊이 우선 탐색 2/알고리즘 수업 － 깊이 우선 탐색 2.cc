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

    stack<int> s;

    for(int i=0;i<v[r].size();i++) s.push(v[r][i]);

    c[r]=1;

    res[r]=1;

    int cnt=2;

    while(s.size()!=0){

        int t=s.top();

        s.pop();

        if(c[t]==0){

            c[t]=1;

            res[t]=cnt;

            cnt++;

            for(int i=0;i<v[t].size();i++) s.push(v[t][i]);

        }

    }

    for(int i=1;i<=n;i++) cout<<res[i]<<"\n";

    return 0;

}