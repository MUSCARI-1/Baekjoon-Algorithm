#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m,INF=123456789;

    cin>>n>>m;

    vector<vector<pair<int,int>>> line(n+1);

    for(int i=0;i<m;i++){

        int a,b,c;

        cin>>a>>b>>c;

        line[a].push_back({b,c});

    }

    vector<long long> upper(n+1,INF);

    upper[1]=0;

    bool update=0;

    for(int i=0;i<n+1;i++){

        update=0;

        for(int j=0;j<=n;j++){

            for(int k=0;k<line[j].size();k++){

                int next=line[j][k].first;

                int cost=line[j][k].second;

                if(upper[j]==INF) continue;

                if(upper[next]>cost+upper[j]){

                    update=1;

                    upper[next]=cost+upper[j];

                }

            }

        }

        if(!update) break;

    }

    if(update){

        cout<<"-1";

        return 0;

    }

    for(int i=2;i<=n;i++){

        if(upper[i]==INF) cout<<"-1"<<"\n";

        else cout<<upper[i]<<"\n";

    }

    return 0;

}