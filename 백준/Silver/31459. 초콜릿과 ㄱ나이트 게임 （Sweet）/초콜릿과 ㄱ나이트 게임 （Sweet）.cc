#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int X,Y,x,y,cnt=0; //가로,세로,오른쪽x,아래y
    cin>>Y>>X>>y>>x;
    vector<vector<int>> v(X);
    for(int i=0;i<X;i++) v[i].resize(Y,0);
    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
            if(v[i][j]==-1) continue;
            cnt++;
            if(i+x<X&&j+y<Y) v[i+x][j+y]=-1;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    FAST_IO
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solve();
    return 0;
}