#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int m,q;
    cin>>m;
    vector<vector<int>> fx(20);
    for(int i=0;i<20;i++) fx[i].resize(200001);
    for(int i=1;i<=m;i++){
        int a;
        cin>>a;
        fx[0][i]=a;
    }
    for(int i=1;i<20;i++){
        for(int j=1;j<=m;j++){
            int now=fx[i-1][j];
            int next=fx[i-1][now];
            fx[i][j]=next;
        }
    }
    cin>>q;
    while(q--){
        int n,x;
        cin>>n>>x;
        for(int i=0;i<20;i++){
            if(n&(1<<i)) x=fx[i][x];
        }
        cout<<x<<"\n";
    }
    return 0;
}