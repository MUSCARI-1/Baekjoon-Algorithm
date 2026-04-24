#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int score[21][21];

vector<bool> check;

int n;

int result=1234567890;

void dfs(int s,int depth){

    if(depth!=n/2){

        for(int i=s;i<=n;i++){

            if(!check[i]){

                check[i]=1;

                dfs(i+1,depth+1);

                check[i]=0;

            }

        }

    }

    else{

        int team1=0;

        int team2=0;

        for(int i=1;i<=n;i++){

            for(int j=1;j<=n;j++){

                if(check[i]==true&&check[j]==true) team1+=score[i][j];

                else if(check[i]==false&&check[j]==false) team2+=score[i][j];

            }

        }

        int cap=abs(team1-team2);

        result=min(cap,result);

    }

}

int main(){

    FAST_IO;

    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++) cin>>score[i][j];

    }

    check.resize(n+1,0);

    dfs(1,0);

    cout<<result;

    return 0;

}