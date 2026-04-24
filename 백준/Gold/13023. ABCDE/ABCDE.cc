#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<bool> c;

vector<vector<int>> v;

bool check=0;

int dfs(int x,int depth){

    if(depth==5){

        check=1;

        return 0;

    }

    for(int i=0;i<v[x].size();i++){

        int nx=v[x][i];

        if(c[nx]) continue;

        c[nx]=1;

        dfs(nx,depth+1);

        c[nx]=0;

    }

    return 0;

}

int main(){

    FAST_IO;

    int n,m;

    cin>>n>>m;

    c.resize(n,0);

    v.resize(n);

    for(int i=0;i<m;i++){

        int a,b;

        cin>>a>>b;

        v[a].push_back(b);

        v[b].push_back(a);

    }

    for(int i=0;i<n;i++){

        c[i]=1;

        dfs(i,1);

        c[i]=0;

        if(check) break;

    }

    if(check) cout<<'1';

    else cout<<'0';

    return 0;

}