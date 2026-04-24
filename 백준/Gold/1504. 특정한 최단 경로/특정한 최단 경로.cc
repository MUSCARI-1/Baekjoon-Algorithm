#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=123456789;

int n,e,v1,v2;

vector<vector<pair<int,int>>> v;

vector<int> distance(int k){

    vector<int> dis(n+1,INF);

    vector<bool> c(n+1,0);

    dis[k]=0;

    priority_queue<pair<int,int>> pq;

    pq.push({0,k});

    while(pq.size()!=0){

        int nowDist=-pq.top().first;

        int now=pq.top().second;

        pq.pop();

        if(c[now]) continue;

        for(int i=0;i<v[now].size();i++){

            int nextDist=nowDist+v[now][i].second;

            int next=v[now][i].first;

            if(dis[next]>nextDist){

                dis[next]=nextDist;

                pq.push({-nextDist,next});

            }

        }

        c[now]=1;

    }

    return dis;

}

int main(){

    FAST_IO;

    cin>>n>>e;

    v.resize(n+1);

    for(int i=0;i<e;i++){

        int a,b,c;

        cin>>a>>b>>c;

        v[a].push_back({b,c});

        v[b].push_back({a,c});

    }

    cin>>v1>>v2;

    vector<int> shortest_1=distance(1);

    vector<int> shortest_v1=distance(v1);

    vector<int> shortest_v2=distance(v2);

    int dist1=shortest_1[v1]+shortest_v1[v2]+shortest_v2[n];

    int dist2=shortest_1[v2]+shortest_v2[v1]+shortest_v1[n];

    int res=min(dist1,dist2);

    if(res>=INF) cout<<"-1";

    else cout<<res;

    return 0;

}