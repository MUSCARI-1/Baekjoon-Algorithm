#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF=987654321;

int n,cnt=0;

vector<vector<int>> change(vector<vector<bool>> &check,vector<vector<int>> v,int now1,int now2,int next1,int next2){

    int score=v[now1][now2];

    auto vv=v;

    vv[now1][now2]=0;

    vv[next1][next2]+=score;

    if(vv[next1][next2]!=score) check[next1][next2]=1;

    return vv;

}

void solve(vector<vector<int>> game,int depth){

    if(depth==5){

        for(int i=0;i<n;i++) for(int j=0;j<n;j++) cnt=max(cnt,game[i][j]);

        return;

    }

    auto copy=game;

    vector<vector<bool>> check(n);

    for(int i=0;i<n;i++) check[i].resize(n,0);

    for(int i=0;i<n;i++){

        for(int j=n-1;j>=0;j--){

            if(copy[i][j]==0) continue;

            int k=j+1;

            while(1){

                if(k>=n){

                    copy=change(check,copy,i,j,i,n-1);

                    break;

                }

                if(copy[i][k]==copy[i][j]&&!check[i][k]){

                    copy=change(check,copy,i,j,i,k);

                    break;

                }

                else if((copy[i][k]!=0&&copy[i][k]!=copy[i][j])||(copy[i][k]==copy[i][j])){

                    copy=change(check,copy,i,j,i,k-1);

                    break;

                }

                k++;

            }

        }

    }//right

    solve(copy,depth+1);

    copy=game;

    for(int i=0;i<n;i++) for(int j=0;j<n;j++) check[i][j]=0;

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            if(copy[i][j]==0) continue;

            int k=j-1;

            while(1){

                if(k<0){

                    copy=change(check,copy,i,j,i,0);

                    break;

                }

                if(copy[i][k]==copy[i][j]&&!check[i][k]){

                    copy=change(check,copy,i,j,i,k);

                    break;

                }

                else if((copy[i][k]!=0&&copy[i][k]!=copy[i][j])||(copy[i][k]==copy[i][j])){

                    copy=change(check,copy,i,j,i,k+1);

                    break;

                }

                k--;

            }

        }

    }//left

    solve(copy,depth+1);

    copy=game;

    for(int i=0;i<n;i++) for(int j=0;j<n;j++) check[i][j]=0;

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            if(copy[j][i]==0) continue;

            int k=j-1;

            while(1){

                if(k<0){

                    copy=change(check,copy,j,i,0,i);

                    break;

                }

                if(copy[k][i]==copy[j][i]&&!check[k][i]){

                    copy=change(check,copy,j,i,k,i);

                    break;

                }

                else if((copy[k][i]!=0&&copy[k][i]!=copy[j][i])||(copy[k][i]==copy[j][i])){

                    copy=change(check,copy,j,i,k+1,i);

                    break;

                }

                k--;

            }

        }

    }//up

    solve(copy,depth+1);

    copy=game;

    for(int i=0;i<n;i++) for(int j=0;j<n;j++) check[i][j]=0;

    for(int i=0;i<n;i++){

        for(int j=n-1;j>=0;j--){

            if(copy[j][i]==0) continue;

            int k=j+1;

            while(1){

                if(k>=n){

                    copy=change(check,copy,j,i,n-1,i);

                    break;

                }

                if(copy[k][i]==copy[j][i]&&!check[k][i]){

                    copy=change(check,copy,j,i,k,i);

                    break;

                }

                else if((copy[k][i]!=0&&copy[k][i]!=copy[j][i])||(copy[k][i]==copy[j][i])){

                    copy=change(check,copy,j,i,k-1,i);

                    break;

                }

                k++;

            }

        }

    }//down

    solve(copy,depth+1);

    return;

}

int main(){

    FAST_IO;

    cin>>n;

    vector<vector<int>> game(n);

    for(int i=0;i<n;i++){

        game[i].resize(n);

        for(int j=0;j<n;j++) cin>>game[i][j];

    }

    solve(game,0);

    cout<<cnt;

    return 0;

}