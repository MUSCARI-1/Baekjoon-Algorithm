#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF=987654321;

void solve(){

    int n,m,t,s,g,h,mustD=0;

    cin>>n>>m>>t>>s>>g>>h;

    vector<vector<pair<int,int>>> road(n+1);//교차로,길이

    vector<int> dist(n+1,INF);

    vector<int> mustDistG(n+1,INF);

    vector<int> mustDistH(n+1,INF);

    vector<int> endPoint(t);

    priority_queue<pair<int,int>> pq;//현 지점 도로길이,정점

    priority_queue<int> result;

    dist[s]=0;

    mustDistG[g]=0;

    mustDistH[h]=0;

    for(int i=0;i<m;i++){

        int a,b,d;

        cin>>a>>b>>d;

        road[a].push_back({b,d});

        road[b].push_back({a,d});

        if((a==g&&b==h)||(a==h&&b==g)) mustD=d;

    }

    for(int i=0;i<t;i++) cin>>endPoint[i];

    pq.push({0,s});

    while(pq.size()!=0){

        int nowDist=-pq.top().first;

        int nowPoint=pq.top().second;

        pq.pop();

        if(nowDist>dist[nowPoint]) continue;

        for(int i=0;i<road[nowPoint].size();i++){

            int nextDist=nowDist+road[nowPoint][i].second;

            int nextPoint=road[nowPoint][i].first;

            if(nextDist<dist[nextPoint]){

                dist[nextPoint]=nextDist;

                pq.push({-nextDist,nextPoint});

            }

        }

    }

    pq.push({0,g});

    while(pq.size()!=0){

        int nowDist=-pq.top().first;

        int nowPoint=pq.top().second;

        pq.pop();

        if(nowDist>mustDistG[nowPoint]) continue;

        for(int i=0;i<road[nowPoint].size();i++){

            int nextDist=nowDist+road[nowPoint][i].second;

            int nextPoint=road[nowPoint][i].first;

            if(nextDist<mustDistG[nextPoint]){

                mustDistG[nextPoint]=nextDist;

                pq.push({-nextDist,nextPoint});

            }

        }

    }

    pq.push({0,h});

    while(pq.size()!=0){

        int nowDist=-pq.top().first;

        int nowPoint=pq.top().second;

        pq.pop();

        if(nowDist>mustDistH[nowPoint]) continue;

        for(int i=0;i<road[nowPoint].size();i++){

            int nextDist=nowDist+road[nowPoint][i].second;

            int nextPoint=road[nowPoint][i].first;

            if(nextDist<mustDistH[nextPoint]){

                mustDistH[nextPoint]=nextDist;

                pq.push({-nextDist,nextPoint});

            }

        }

    }

    for(int i=0;i<t;i++){

        int finalPoint=endPoint[i];

        int realDist=min(mustDistG[s]+mustDistH[finalPoint],

        mustDistG[finalPoint]+mustDistH[s])+mustD;

        if(realDist==dist[finalPoint]) result.push(-finalPoint);

    }

    while(result.size()!=0){

        cout<<-result.top()<<' ';

        result.pop();

    }

    return;

}

int main(){

    FAST_IO;

    int tc;

    cin>>tc;

    for(int i=0;i<tc;i++){

        solve();

        cout<<endl;

    }

    return 0;

}