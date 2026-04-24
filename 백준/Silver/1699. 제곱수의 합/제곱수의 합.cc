#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int INF=1234567890;

int main(){
    FAST_IO;
    int n;
    cin>>n;
    vector<int> v(n+1,INF);
    v[n]=0;
    for(int i=n;i>0;i--){
        for(int j=sqrt(i);j>0;j--){
            int next=i-j*j;
            if(next<0) continue;
            v[next]=min(v[i]+1,v[next]);
        }
    }
    cout<<v[0];
    return 0;
}