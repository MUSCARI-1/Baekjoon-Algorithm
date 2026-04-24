#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;


int main(){
    FAST_IO;
    int n,m,res=INF;
    cin>>n>>m;
    vector<vector<int>> v(n+1);
    for(int i=1;i<=n;i++) v[i].resize(n+1,INF);
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v[a][b]=min(v[a][b],c);
    }
    vector<vector<int>> cost(n+1);
    for(int i=1;i<=n;i++){
        cost[i].resize(n+1,INF);
        for(int j=1;j<=n;j++){
            if(i==j) cost[i][j]=0;
            else if(v[i][j]!=INF) cost[i][j]=v[i][j];
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(cost[i][j]!=INF&&v[j][i]!=INF) cost[i][j]+=v[j][i];
            else cost[i][j]=INF;
        }
    }
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) res=min(res,cost[i][j]);
    if(res==INF) cout<<"-1";
    else cout<<res;
    return 0;
}