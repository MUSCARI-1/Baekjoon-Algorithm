#include <bits/stdc++.h> 
using namespace std;
#define FAST_IO ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int solve(int n){
    vector<vector<int>> cache(n+1);
    for(int i=1;i<=n;i++) cache[i].resize(2);
    for(int j=0;j<2;j++){
        for(int i=1;i<=n;i++) cin>>cache[i][j];
    }
    for(int i=1;i<=n;i++){
        if(i==1) continue;
        else if(i==2){
            cache[2][0]+=cache[1][1];
            cache[2][1]+=cache[1][0];
        }
        else{
            int highScore0=max({cache[i-2][0],cache[i-2][1],cache[i-1][1]});
            int highScore1=max({cache[i-2][0],cache[i-2][1],cache[i-1][0]});
            cache[i][0]+=highScore0;
            cache[i][1]+=highScore1;
        }
    }
    int res=max(cache[n][0],cache[n][1]);
    return res;
}

int main(){
    FAST_IO;
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cout<<solve(n)<<"\n";
    }
    return 0;
}