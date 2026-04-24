#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int bfs(vector<vector<int>> v){

    queue<int> q;

    queue<int> cnt;

    vector<bool> c(101,0);

    q.push(1);

    cnt.push(0);

    c[1]=1;

    while(q.size()!=0){

        int x=q.front();

        q.pop();

        if(x>=94) return cnt.front()+1;

        else{

            for(int i=1;i<=6;i++){

                if(c[x+i]!=0) continue;

                if(v[x+i].size()!=0){

                    int k=v[x+i][0];

                    if(c[k]!=0) continue;

                    c[k]=1;

                    q.push(k);

                    cnt.push(cnt.front()+1);

                }

                else{

                    c[x+i]=1;

                    q.push(x+i);

                    cnt.push(cnt.front()+1);

                }

            }

        }

        cnt.pop();

    }

}

int main(){

    FAST_IO;

    int n,m;

    cin>>n>>m;

    vector<vector<int>> v(101);

    for(int i=0;i<n+m;i++){

        int a,b;

        cin>>a>>b;

        v[a].push_back(b);

    }

    cout<<bfs(v);

    return 0;

}