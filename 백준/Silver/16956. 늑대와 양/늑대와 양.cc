#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int x[4]={1,0,-1,0};
int y[4]={0,-1,0,1};

int main(){
    FAST_IO
    int r,c;
    cin>>r>>c;
    vector<string> v;
    v.resize(r);
    for(int i=0;i<r;i++) cin>>v[i];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(v[i][j]=='W'){
                for(int k=0;k<4;k++){
                    int nx=i+x[k];
                    int ny=j+y[k];
                    if(nx<0||nx>=r||ny<0||ny>=c) continue;
                    if(v[nx][ny]=='S'){
                        cout<<'0'<<endl;
                        return 0;
                    }
                    else if(v[nx][ny]=='.'){
                        v[nx][ny]='D';
                    }
                }
            }
        }
    }
    cout<<'1'<<endl;
    for(int i=0;i<r;i++) cout<<v[i]<<endl;
    return 0;
}