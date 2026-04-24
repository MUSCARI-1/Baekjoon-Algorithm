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

int n,k;

bool check=0;

queue<pair<int,int>> point;

vector<bool> vec_ch(100001,0);

int make(){

    cin >> n >> k;

    point.push({n,0});

    vec_ch[n]=1;

    return 0;

}

int solve(int x,int cnt){

    int nx1=x+1;

    int nx2=x-1;

    int nx3=x*2;

    if(x==k){

        cout << cnt;

        check=1;

        return 0;

    }

    else if(x==0){

        if(vec_ch[nx1]==0){

            vec_ch[nx1]=1;

            point.push({nx1,cnt+1});

        }

        return 0;

    }

    if(nx1<=100000){

        if(vec_ch[nx1]==0){

            vec_ch[nx1]=1;

            point.push({nx1,cnt+1});

        }

    }

    if(nx2<=100000){

        if(vec_ch[nx2]==0){

            vec_ch[nx2]=1;

            point.push({nx2,cnt+1});

        }

    }

    if(nx3<=100000){

        if(vec_ch[nx3]==0){

            vec_ch[nx3]=1;

            point.push({nx3,cnt+1});

        }

    }

    return 0;

}

int main(){

    make();

    while(point.size()!=0){

        solve(point.front().first,point.front().second);

        point.pop();

        if(check==1) return 0;

    }

    return 0;

}