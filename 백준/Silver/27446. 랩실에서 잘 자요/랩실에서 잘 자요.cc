#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int n,m,cnt=0;
    cin>>n>>m;
    vector<bool> c(n+1,0);
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        c[a]=1;
    }
    int p=1;
    while(p<=n){
        int ink=7;
        if(c[p]){
            p++;
            continue;
        }
        int nowp=p+1;
        while(1){
            if(nowp>n){
                p=nowp;
                break;
            }
            else if(!c[nowp]){
                ink+=(nowp-p)*2;
                p=nowp;
            }
            else if(nowp==p+3){
                break;
            }
            nowp++;
        }
        cnt+=ink;
        p++;
    }
    cout<<cnt;
    return 0;
}