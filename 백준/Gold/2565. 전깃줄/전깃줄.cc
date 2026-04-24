#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> v;

vector<vector<bool>> check;

int n;

vector<pair<int,int>> line;

int solve(){

    for(int i=0;i<501;i++){

        for(int j=0;j<501;j++){

            if(check[i][j]==1){

                if(i==0||j==0) v[i][j]=1;

                else{

                    v[i][j]=v[i-1][j-1]+1;

                }

            }

            else{

                if(i==0) v[i][j]=v[i][j-1];

                else if(j==0) v[i][j]=v[i-1][j];

                else v[i][j]=max(v[i][j-1],v[i-1][j]);

            }

        }

    }

    return 0;

}

int main(){

    FAST_IO;

    cin>>n;

    for(int i=0;i<n;i++){

        int a,b;

        cin>>a>>b;

        line.push_back({a,b});

    }

    sort(line.begin(),line.end());

    check.resize(501);

    v.resize(501);

    for(int i=0;i<501;i++){

        check[i].resize(501,0);

        v[i].resize(501,0);

    }

    for(int i=0;i<n;i++) check[line[i].first][line[i].second]=1;

    solve();

    cout<<n-v[500][500];

    return 0;

}