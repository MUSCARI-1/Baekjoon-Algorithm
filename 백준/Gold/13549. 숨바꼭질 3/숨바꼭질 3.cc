#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,f;

    cin>>n>>f;

    priority_queue<pair<int,int>> pq;

    pq.push({0,n});

    vector<int> dist(1000000,123456789);

    while(pq.size()!=0){

        int cost=-pq.top().first;

        int num=pq.top().second;

        pq.pop();

        if(dist[num]<cost) continue;

        if(num==f){

            cout<<cost;

            return 0;

        }

        else{

            bool p=0,s=0,m=0;

            if(num>f) s=1;

            else{

                p=1;

                s=1;

                m=1;

            }

            if(dist[num-1]<=cost+1) s=0;

            if(dist[num+1]<=cost+1) p=0;

            if(dist[num*2]<=cost) m=0;

            if(s){

                pq.push({-(cost+1),num-1});

                dist[num-1]=min(dist[num-1],cost+1);

            }

            if(p){

                pq.push({-(cost+1),num+1});

                dist[num+1]=min(dist[num+1],cost+1);

            }

            if(m){

                pq.push({-cost,num*2});

                dist[num*2]=min(dist[num*2],cost);

            }

        }

        //cout<<cost<<" "<<num<<endl;

    }

    return 0;

}