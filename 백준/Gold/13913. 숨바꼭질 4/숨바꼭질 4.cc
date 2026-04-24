#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,k;

    cin>>n>>k;

    vector<int> v(150001,-1);//backpoint

    queue<int> q;

    q.push(n);

    while(v[k]==-1){

        int now=q.front();

        q.pop();

        if(now+1<=100000&&v[now+1]==-1){

            v[now+1]=now;

            q.push(now+1);

        }

        if(now-1>=0&&v[now-1]==-1){

            v[now-1]=now;

            q.push(now-1);

        }

        if(now*2<=150000&&v[now*2]==-1){

            v[now*2]=now;

            q.push(now*2);

        }

    }

    vector<int> path;

    int point=k;

    path.push_back(k);

    while(point!=n){

        point=v[point];

        path.push_back(point);

    }

    cout<<path.size()-1<<endl;

    for(int i=path.size()-1;i>=0;i--) cout<<path[i]<<" ";

    return 0;

}