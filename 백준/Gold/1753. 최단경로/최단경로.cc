#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<pair<int,int>>> graph;

int main(){

    FAST_IO;

    int V,E,s;

    cin>>V>>E>>s;

    graph.resize(V+1);

    for(int i=0;i<E;i++){

        int u,v,w;

        cin>>u>>v>>w;

        graph[u].push_back({v,w});//first:정점 v second:가격

    }

    priority_queue<pair<int,int>> pq;

    pq.push({0,s});//코스트,정점

    vector<int> dist(V+1,1234567890);

    dist[s]=0;

    while(pq.size()!=0){

        int pnt=pq.top().second;

        int cost=-pq.top().first;

        pq.pop();

        if(cost>dist[pnt]) continue;

        for(int i=0;i<graph[pnt].size();i++){

            int next=graph[pnt][i].first;

            int nc=graph[pnt][i].second;

            if(dist[next]>cost+nc){

                dist[next]=cost+nc;

                pq.push({-dist[next],next});

            }

        }

    }

    for(int i=1;i<=V;i++){

        if(dist[i]==1234567890) cout<<"INF"<<"\n";

        else cout<<dist[i]<<"\n";

    }

    return 0;

}