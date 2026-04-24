#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m,houseCnt,chickenCnt,res=1234567890;
vector<pair<int,int>> remain,house,chicken;

void combi(int pnt){
    remain.push_back({chicken[pnt].first,chicken[pnt].second});
    if(remain.size()!=m){
        for(int i=pnt+1;i<chickenCnt;i++) combi(i);
    }
    else{
        int nowResult=0;
        for(int i=0;i<houseCnt;i++){
            int cnt=1234567890;
            for(int j=0;j<m;j++){
                int now=abs(house[i].first-remain[j].first)+abs(house[i].second-remain[j].second);
                cnt=min(cnt,now);
            }
            nowResult+=cnt;
        }
        res=min(nowResult,res);
    }
    remain.pop_back();
}

int main(){
    FAST_IO
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int k;
            cin>>k;
            if(k==1) house.push_back({i,j});
            else if(k==2) chicken.push_back({i,j});
        }
    }
    houseCnt=house.size();
    chickenCnt=chicken.size();
    for(int i=0;i<chickenCnt;i++) combi(i);
    cout<<res;
    return 0;
}