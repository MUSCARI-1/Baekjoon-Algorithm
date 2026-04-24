#include <bits/stdc++.h>
#define FAST_IO ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int n,m,resultPoint=-1,resultDist=INF;
    cin>>n>>m;
    vector<vector<int>> dist(n+1);
    for(int i=1;i<=n;i++) dist[i].resize(n+1,INF);
    for(int i=1;i<=n;i++) dist[i][i]=0;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        dist[a][b]=1;
        dist[b][a]=1;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j) continue;
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=n;j++) cnt+=dist[i][j];
        if(resultDist>cnt){
            resultPoint=i;
            resultDist=cnt;
        }
    }
    cout<<resultPoint;
    return 0;
}