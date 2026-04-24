#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int INF=987654321;

int solve(){
    int n,m,w;
    cin>>n>>m>>w;
    vector<vector<pair<int,int>>> v(n+1);
    for(int i=0;i<m;i++){
        int s,e,t;
        cin>>s>>e>>t;
        v[s].push_back({e,t});
        v[e].push_back({s,t});
    }
    for(int i=0;i<w;i++){
        int s,e,t;
        cin>>s>>e>>t;
        v[s].push_back({e,-t});
    }
    vector<int> upper(n+1,INF);
    upper[1]=0;
    bool update=0;
    for(int i=0;i<m+w+1;i++){
        update=0;
        for(int j=1;j<=n;j++){
            int nowPoint=j;
            int nowCost=upper[j];
            for(int k=0;k<v[nowPoint].size();k++){
                int nextPoint=v[nowPoint][k].first;
                int nextCost=nowCost+v[nowPoint][k].second;
                if(nextCost<upper[nextPoint]){
                    upper[nextPoint]=nextCost;
                    update=1;
                }
            }
        }
        if(!update) break;
    }
    if(!update) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}

int main(){
    FAST_IO;
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++) solve();
    return 0;
}