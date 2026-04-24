#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> v;

void solve(){

    int x,y,x2,y2;

    cin>>x>>y>>x2>>y2;

    x--;

    y--;

    x2--;

    y2--;

    if(x==0&&y==0){

        cout<<v[x2][y2]<<"\n";

        return;

    }

    else if(x==0){

        cout<<v[x2][y2]-v[x2][y-1]<<"\n";

        return;

    }

    else if(y==0){

        cout<<v[x2][y2]-v[x-1][y2]<<"\n";

        return;

    }

    int cnt=v[x2][y2]-v[x-1][y2]-v[x2][y-1]+v[x-1][y-1];

    cout<<cnt<<"\n";

    return;

}

int main(){

    FAST_IO;

    int n,m;

    cin>>n>>m;

    v.resize(n);

    for(int i=0;i<n;i++){

        v[i].resize(n);

        for(int j=0;j<n;j++) cin>>v[i][j];

    }

    for(int i=1;i<n;i++){

        v[0][i]+=v[0][i-1];

        v[i][0]+=v[i-1][0];

    }

    for(int i=1;i<n;i++) for(int j=1;j<n;j++) v[i][j]=v[i][j]+v[i][j-1]+v[i-1][j]-v[i-1][j-1];

    /*for(int i=0;i<n;i++){

        for(int j=0;j<n;j++) cout<<v[i][j]<<" ";

        cout<<endl;

    }*/

    for(int i=0;i<m;i++) solve();

    return 0;

}