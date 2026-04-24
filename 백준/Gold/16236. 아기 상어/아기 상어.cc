#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF=987654321;

bool c=1;

int n,totalTime=0,sharkSize=2,sharkExp=0;

vector<vector<int>> gameMap;

priority_queue<tuple<int,int,int>> pq;

int startX;

int startY;

void bfs(){

    vector<vector<bool>> check(n);

    for(int i=0;i<n;i++){

        check[i].resize(n,0);

        for(int j=0;j<n;j++){

            if(gameMap[i][j]==9){

                check[i][j]=1;

                pq.push({0,-i,-j});

                startX=i;

                startY=j;

            }

        }

    }

    while(pq.size()!=0){

        int nowX=-get<1>(pq.top());

        int nowY=-get<2>(pq.top());

        int nowDist=-get<0>(pq.top());

        pq.pop();

        if(gameMap[nowX][nowY]>0&&gameMap[nowX][nowY]<sharkSize){

            gameMap[nowX][nowY]=9;

            gameMap[startX][startY]=0;

            sharkExp++;

            totalTime+=nowDist;

            while(pq.size()!=0) pq.pop();

            return;

        }

        int xx[4]={1,0,-1,0};

        int yy[4]={0,-1,0,1};

        for(int i=0;i<4;i++){

            int nextX=nowX+xx[i];

            int nextY=nowY+yy[i];

            if(nextX<0||nextX>=n||nextY<0||nextY>=n) continue;

            if(gameMap[nextX][nextY]>sharkSize||check[nextX][nextY]) continue;

            check[nextX][nextY]=1;

            pq.push({-(nowDist+1),-nextX,-nextY});

        }

    }

    c=0;

    return;

}

int main(){

    FAST_IO;

    cin>>n;

    gameMap.resize(n);

    for(int i=0;i<n;i++){

        gameMap[i].resize(n);

        for(int j=0;j<n;j++) cin>>gameMap[i][j];

    }

    while(c){

        bfs();

        if(sharkExp==sharkSize){

            sharkSize++;

            sharkExp=0;

        }

        if(sharkSize>7) sharkSize=7;

    }

    cout<<totalTime;

    return 0;

}

