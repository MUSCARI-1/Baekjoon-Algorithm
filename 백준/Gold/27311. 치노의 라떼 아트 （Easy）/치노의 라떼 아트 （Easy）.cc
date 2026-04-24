#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int solve(){
    int n,m;
    cin>>n>>m;
    vector<string> cream(n);
    for(int i=0;i<n;i++) cin>>cream[i];
    int lx=INF,ly=INF+123,hx=-1,hy=-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(cream[i][j]=='#'){
                lx=min(lx,i);
                ly=min(ly,j);
                hx=max(hx,i);
                hy=max(hy,j);
            }
        }
    }
    if(hx-lx!=hy-ly) return 0;
    bool corner=0;
    if(cream[lx][ly]=='.') corner=1;
    if(cream[lx][hy]=='.') corner=1;
    if(cream[hx][ly]=='.') corner=1;
    if(cream[hx][hy]=='.') corner=1;
    if(!corner) return 0;
    int px=-1,py=-1,size=1;
    for(int i=lx;i<=hx;i++){
        for(int j=ly;j<=hy;j++){
            if(cream[i][j]=='.'){
                px=i;
                py=j;
            }
            if(px!=-1&&py!=-1) break;
        }
        if(px!=-1&&py!=-1) break;
    }
    if(px==-1) return 0;
    for(int i=py+1;i<=hy;i++){
        if(cream[px][i]=='.'){
            size++;
        }
        else break;
    }
    for(int i=px;i<px+size;i++){
        for(int j=py;j<py+size;j++){
            if(i<lx||i>hx||j<ly||j>hy) return 0;
            if(cream[i][j]=='#') return 0;
            else cream[i][j]='#';
        }
    }
    for(int i=lx;i<=hx;i++){
        for(int j=ly;j<=hy;j++) if(cream[i][j]=='.') return 0;
    }
    return 1;
}

int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++) cout<<solve()<<endl;
    return 0;
}