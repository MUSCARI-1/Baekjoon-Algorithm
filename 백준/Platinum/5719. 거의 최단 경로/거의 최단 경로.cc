#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int solve(int n,int m){
    int s,d;
    cin>>s>>d;
    vector<vector<tuple<int,int,bool>>> road(n);//point,cost,Y/N
    for(int i=0;i<m;i++){
        int u,v,p;
        cin>>u>>v>>p;
        road[u].push_back({v,p,1});
    }
    vector<int> shortestDist(n,INF);
    shortestDist[s]=0;
    vector<vector<int>> backPoint(n);
    priority_queue<pair<int,int>> pq;
    pq.push({0,s});
    while(pq.size()!=0){
        int nowPoint=pq.top().second;
        int nowCost=-pq.top().first;
        pq.pop();
        if(nowCost>shortestDist[nowPoint]) continue;
        for(int i=0;i<road[nowPoint].size();i++){
            int nextPoint=get<0>(road[nowPoint][i]);
            int nextCost=nowCost+get<1>(road[nowPoint][i]);
            if(nextCost<shortestDist[nextPoint]){
                while(backPoint[nextPoint].size()!=0) backPoint[nextPoint].pop_back();
                backPoint[nextPoint].push_back(nowPoint);
                shortestDist[nextPoint]=nextCost;
                pq.push({-nextCost,nextPoint});
            }
            else if(nextCost==shortestDist[nextPoint]){
                backPoint[nextPoint].push_back(nowPoint);
            }
        }
    }
    if(shortestDist[d]==INF) return -1;
    queue<int> q;
    q.push(d);
    vector<bool> use(n,0);
    use[d]=1;
    use[s]=1;
    while(q.size()!=0){
        int nowP=q.front();
        q.pop();
        for(int i=0;i<backPoint[nowP].size();i++){
            int backP=backPoint[nowP][i];
            for(int j=0;j<road[backP].size();j++){
                if(get<0>(road[backP][j])==nowP){
                    get<2>(road[backP][j])=0;
                    if(!use[backP]){
                        q.push(backP);
                        use[backP]=1;
                    }
                }
            }
        }
    }
    vector<int> dist(n,INF);
    dist[s]=0;
    pq.push({0,s});
    while(pq.size()!=0){
        int nowPoint=pq.top().second;
        int nowCost=-pq.top().first;
        pq.pop();
        if(nowCost>dist[nowPoint]) continue;
        for(int i=0;i<road[nowPoint].size();i++){
            if(!get<2>(road[nowPoint][i])) continue;
            int nextPoint=get<0>(road[nowPoint][i]);
            int nextCost=nowCost+get<1>(road[nowPoint][i]);
            if(nextCost<dist[nextPoint]){
                dist[nextPoint]=nextCost;
                pq.push({-nextCost,nextPoint});
            }
        }
    }
    if(dist[d]==INF) return -1;
    else return dist[d];
}

int main(){
    FAST_IO;
    int n,m;
    while(1){
        cin>>n>>m;
        if(n==0) break;
        cout<<solve(n,m)<<endl;
    }
    return 0;
}