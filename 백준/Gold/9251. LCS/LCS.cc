#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

string str1,str2;

vector<vector<int>> v;

int solve(){

    for(int i=0;i<str1.size();i++){

        for(int j=0;j<str2.size();j++){

            if(str1[i]==str2[j]){

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

    cin>>str1>>str2;

    v.resize(str1.size());

    for(int i=0;i<str1.size();i++) v[i].resize(str2.size(),0);

    solve();

    cout<<v[str1.size()-1][str2.size()-1];

    return 0;

}