#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int n,m;
    cin>>n>>m;
    vector<vector<int>> cost(n+1);
    for(int i=1;i<=n;i++){
        cost[i].resize(n+1,INF);
        cost[i][i]=0;
    }
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        cost[a][b]=min(cost[a][b],c);
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
            }
        }
    }
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) if(cost[i][j]==INF) cost[i][j]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<cost[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}
