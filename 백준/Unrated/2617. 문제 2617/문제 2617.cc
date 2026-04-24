#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m;

vector<vector<int>> low(105);

vector<vector<int>> high(105);

vector<vector<bool>> c(105);

int check(){

    int cnt=1;

    while(cnt!=n+1){

        bool o=0;

        for(int i=0;i<high[cnt].size();i++){

            int nx=high[cnt][i];

            if(high[nx].size()!=0){

                for(int j=0;j<high[nx].size();j++){

                    if(c[cnt][high[nx][j]]==1) continue;

                    c[cnt][high[nx][j]]=1;

                    high[cnt].push_back(high[nx][j]);

                    o=1;

                }

            }

        }

        if(!o) cnt++;

        else cnt=1;

    }

    cnt=1;

    while(cnt!=n+1){

        bool o=0;

        for(int i=0;i<low[cnt].size();i++){

            int nx=low[cnt][i];

            if(low[nx].size()!=0){

                for(int j=0;j<low[nx].size();j++){

                    if(c[cnt][low[nx][j]]==1) continue;

                    c[cnt][low[nx][j]]=1;

                    low[cnt].push_back(low[nx][j]);

                    o=1;

                }

            }

        }

        if(!o) cnt++;

        else cnt=1;

    }

    return 0;

}

int main(){

    FAST_IO;

    cin>>n>>m;

    for(int i=0;i<=n;i++) c[i].resize(105,0);

    for(int i=0;i<m;i++){

        int a,b;

        cin>>a>>b;

        if(c[a][b]==0){

            c[a][b]=1;

            low[a].push_back(b);

        }

        if(c[b][a]==0){

            c[b][a]=1;

            high[b].push_back(a);

        }

    }

    /*for(int i=1;i<=n;i++){

        cout<<i<<endl;

        if(high[i].size()!=0) for(int j=0;j<high[i].size();j++) cout<<high[i][j]<<" ";

        cout<<endl;

        if(high[i].size()!=0) for(int j=0;j<low[i].size();j++) cout<<low[i][j]<<" ";

        cout<<endl;

    }*/

    check();

    /*for(int i=1;i<=n;i++){

        cout<<i<<endl;

        for(int j=0;j<high[i].size();j++) cout<<high[i][j]<<" ";

        cout<<endl;

        for(int j=0;j<low[i].size();j++) cout<<low[i][j]<<" ";

        cout<<endl;

    }*/

    int cnt=0;

    for(int i=1;i<=n;i++){

        if(high[i].size()>n/2||low[i].size()>n/2) cnt++;

    }

    cout<<cnt;

    return 0;

}