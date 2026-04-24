#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int solve(int n,int m){

    vector<vector<int>> v(n+1);

    vector<bool> check(n+1,0);

    int cnt=0;

    for(int i=0;i<m;i++){

        int a,b;

        cin>>a>>b;

        v[a].push_back(b);

        v[b].push_back(a);

    }

    queue<int> q;

    while(1){

        for(int i=1;i<n+1;i++){

            if(!check[i]){

                check[i]=1;

                q.push(i);

                break;

            }

        }

        if(q.size()==0) return cnt;

        bool tree=1;

        while(q.size()!=0){

            int x=q.front();

            q.pop();

            int use=1;

            for(int i=0;i<v[x].size();i++){

                int nx=v[x][i];

                if(check[nx]){

                    use--;

                    continue;

                }

                check[nx]=1;

                q.push(nx);

            }

            if(use<0) tree=0;

        }

        if(tree) cnt++;

    }

}

int main(){

    FAST_IO;

    int k=1;

    while(1){

        int n,m;

        cin>>n>>m;

        if(n==0&&m==0) return 0;

        int cnt=solve(n,m);

        cout<<"Case "<<k<<": ";

        if(cnt==0) cout<<"No trees.";

        else if(cnt==1) cout<<"There is one tree.";

        else cout<<"A forest of "<<cnt<<" trees.";

        cout<<"\n";

        k++;

    }

    return 0;

}