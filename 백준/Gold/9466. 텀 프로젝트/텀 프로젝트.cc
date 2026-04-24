#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int solve(){
    int n,cnt=0;
    cin>>n;
    vector<int> check(n+1,-1);
    vector<int> pnt(n+1);
    for(int i=1;i<=n;i++) cin>>pnt[i];
    for(int i=1;i<=n;i++) if(pnt[i]==i) check[i]=1;
    for(int i=1;i<=n;i++){
        if(check[i]!=-1) continue;
        vector<bool> path(n+1,0);
        vector<int> arr;
        int now=i;
        arr.push_back(i);
        path[now]=1;
        while(1){
            now=pnt[now];
            if(path[now]||check[now]!=-1) break;
            arr.push_back(now);
            path[now]=1;
        }
        if(check[now]!=-1) for(int j=0;j<arr.size();j++) check[arr[j]]=0;
        else{
            int point;
            for(int j=0;j<arr.size();j++) if(now==arr[j]) point=j;
            for(int j=0;j<point;j++) check[arr[j]]=0;
            for(int j=point;j<arr.size();j++) check[arr[j]]=1;
        }
    }
    for(int i=1;i<=n;i++) if(check[i]==0) cnt++;
    return cnt;
}

int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++) cout<<solve()<<"\n";
    return 0;
}