#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> v;

string alpha="abcdefghijklmnopqrstuvwxyz";

void solve(){

    char a;

    int x,y;

    int q=-1;

    cin>>a>>x>>y;

    while(q==-1){

        for(int i=0;i<26;i++){

            if(a==alpha[i]){

                q=i;

                break;

            }

        }

    }

    cout<<v[q][y]-v[q][x-1]<<"\n";

}

int main(){

    FAST_IO;

    string str;

    int n;

    cin>>str>>n;

    v.resize(26);

    for(int i=0;i<26;i++){

        v[i].resize(str.size(),0);

        for(int j=0;j<str.size();j++){

            if(str[j]-'0'-49==i) v[i][j]=v[i][j-1]+1;

            else v[i][j]=v[i][j-1];

        }

    }

    for(int i=0;i<n;i++) solve();

    return 0;

}