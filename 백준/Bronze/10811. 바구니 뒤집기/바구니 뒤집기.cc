#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int n,m;
    cin>>n>>m;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) v[i]=i;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        while(a<b){
            swap(v[a],v[b]);
            a++;
            b--;
        }
    }
    for(int i=1;i<=n;i++) cout<<v[i]<<' ';
    return 0;
}