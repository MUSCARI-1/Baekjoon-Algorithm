#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<int> mom(n+1,-1);

    mom[1]=-2;

    vector<vector<int>> line(n+1);

    for(int i=0;i<n-1;i++){

        int a,b;

        cin>>a>>b;

        line[a].push_back(b);

        line[b].push_back(a);

    }

    queue<int> q;

    q.push(1);

    while(q.size()!=0){

        int root=q.front();

        q.pop();

        for(int i=0;i<line[root].size();i++){

            int next=line[root][i];

            if(mom[next]!=-1) continue;

            mom[next]=root;

            q.push(next);

        }

    }

    for(int i=2;i<=n;i++) cout<<mom[i]<<"\n";

    return 0;

}