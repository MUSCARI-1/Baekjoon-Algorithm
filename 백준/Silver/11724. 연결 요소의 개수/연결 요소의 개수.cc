#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<set>

#include<map>

#include<cmath>

#include<string>

using namespace std;

int cnt=0;

int n,m;

vector<vector<int>> point;

vector<bool> check;

queue<int> searc;

int make(){

    cin >> n >> m;

    point.resize(n+1);

    check.resize(n+1);

    int a,b;

    for(int i=0;i<m;i++){

        cin >> a >> b;

        point[a].push_back(b);

        point[b].push_back(a);

    }

    for(int i=0;i<n+1;i++) check[i]=0;

    return 0;

}

int solve(int x){

    check[x]=1;

    while(point[x].size()!=0){

        int nx=point[x].front();

        if(check[nx]==0){

            searc.push(nx);

        }

        point[x].erase(point[x].begin());

    }

    return 0;

}

int main(){

    make();

    for(int i=1;i<n+1;i++){

        if(check[i]==0){

            searc.push(i);

            while(searc.size()!=0){

                solve(searc.front());

                searc.pop();

            }

            cnt++;

        }

    }

    cout << cnt;

    return 0;

}