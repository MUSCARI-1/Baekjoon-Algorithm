#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=123456789;

int diameter=0,diaPoint=1;

vector<vector<pair<int,int>>> tree;

void dfs(int nowPoint,int backPoint,int cnt){

    if(tree[nowPoint].size()==1&&backPoint!=-1){

        bool use=0;

        if(diameter<cnt){

            diameter=cnt;

            use=1;

        }

        if(use) diaPoint=nowPoint;

        return;

    }

    for(int i=0;i<tree[nowPoint].size();i++){

        int nextPoint=tree[nowPoint][i].first;

        int nextCnt=cnt+tree[nowPoint][i].second;

        if(nextPoint==backPoint) continue;

        dfs(nextPoint,nowPoint,nextCnt);

    }

    return;

}

int main(){

    FAST_IO;

    int n;

    cin>>n;

    tree.resize(n+1);

    for(int i=0;i<n-1;i++){

        int a,b,c;

        cin>>a>>b>>c;

        tree[a].push_back({b,c});

        tree[b].push_back({a,c});

    }

    bool k=1;

    while(k){

        dfs(diaPoint,-1,0);

        int frontMeter=diameter;

        dfs(diaPoint,-1,0);

        int backMeter=diameter;

        if(frontMeter==backMeter) break;

    }

    cout<<diameter;

    return 0;

}