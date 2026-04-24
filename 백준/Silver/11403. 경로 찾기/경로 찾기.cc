#include <bits/stdc++.h>
#define FAST_IO ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    FAST_IO;
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    vector<vector<int>> res(n);
    for(int i=0;i<n;i++){
        v[i].resize(n);
        res[i].resize(n);
        for(int j=0;j<n;j++){
            cin>>v[i][j];
            res[i][j]=v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        queue<int> q;
        vector<bool> check(n,0);
        for(int j=0;j<n;j++){
            if(v[i][j]==1){
                q.push(j);
                check[j]=1;
                res[i][j]=1;
            }
        }
        while(q.size()!=0){
            int now=q.front();
            q.pop();
            for(int j=0;j<n;j++){
                if(v[now][j]==1&&check[j]==0){
                    q.push(j);
                    check[j]=1;
                    res[i][j]=1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<res[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}