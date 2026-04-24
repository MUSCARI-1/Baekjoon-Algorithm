#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int t=0,pottery=0,coffee=0,limit=v[0],p=1,realp=0;
    while(1){
        if(limit==t&&coffee==0){
            cout<<"fail";
            return 0;
        }
        if(limit==t){
            coffee--;
            t++;
            if(p==v.size()) break;
            limit=v[p];
            p++;
            continue;
        }
        if(pottery==0){
            pottery++;
            t++;
            continue;
        }
        if(t+m>=v[realp]){
            coffee++;
            pottery--;
            t++;
            realp++;
            if(realp==v.size()) break;
            continue;
        }
        else{
            pottery++;
            t++;
        }
    }
    cout<<"success";
    return 0;
}