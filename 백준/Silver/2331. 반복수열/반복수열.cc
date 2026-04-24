#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    FAST_IO;
    int a,p;
    cin>>a>>p;
    vector<bool> c(1000000000,0);
    vector<int> v;
    v.push_back(a);
    c[a]=1;
    int now=a;
    while(1){
        string s=to_string(now);
        int cnt=0;
        for(int i=0;i<s.size();i++){
            cnt+=pow(s[i]-'0',p);
        }
        now=cnt;
        if(c[now]) break;
        c[now]=1;
        v.push_back(now);
    }
    int k;
    for(int i=0;i<v.size();i++) if(v[i]==now) k=i;
    cout<<k;
    return 0;
}