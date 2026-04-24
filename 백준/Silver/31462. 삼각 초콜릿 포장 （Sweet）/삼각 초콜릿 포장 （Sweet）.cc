#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    int n;
    cin>>n;
    vector<string> v(n);
    vector<vector<int>> check(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        check[i].resize(n,-1);
        for(int j=0;j<=i;j++) check[i][j]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(check[i][j]==1) continue;
            if(v[i][j]=='R'){
                if(i+1>=n||v[i+1][j]=='B'||v[i+1][j+1]=='B'||check[i+1][j]==1||check[i+1][j+1]==1){
                    cout<<'0';
                    return 0;
                }
                check[i][j]=1;
                check[i+1][j]=1;
                check[i+1][j+1]=1;
            }
            else{
                if(j+1>i||v[i][j+1]=='R'||v[i+1][j+1]=='R'||check[i][j+1]==1||check[i+1][j+1]==1){
                    cout<<'0';
                    return 0;
                }
                check[i][j]=1;
                check[i][j+1]=1;
                check[i+1][j+1]=1;
            }
        }
    }
    cout<<'1';
    return 0;
}