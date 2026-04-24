#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int solve(){
    int s,t;
    cin>>s>>t;
    queue<tuple<int,int,int>> pq;
    pq.push({0,s,t});
    while(pq.size()!=0){
        int now=get<1>(pq.front());
        int end=get<2>(pq.front());
        int cnt=-get<0>(pq.front());
        pq.pop();
        if(now==end) return cnt;
        else if(now>end) continue;
        pq.push({-cnt-1,now*2,end+3});
        pq.push({-cnt-1,now+1,end});
    }
    return -1;
}

int main(){
    FAST_IO;
    int c;
    cin>>c;
    for(int i=0;i<c;i++) cout<<solve()<<endl;
    return 0;
}