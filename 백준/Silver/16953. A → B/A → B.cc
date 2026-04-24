#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int a,b;

    cin>>a>>b;

    int cnt=123456789;

    queue<pair<long long,int>> q;

    q.push({a,1});

    while(q.size()!=0){

        long long n;

        if(q.front().first==b){

            cnt=min(cnt,q.front().second);

        }

        if(q.front().first*2<=b){

            q.push({q.front().first*2,q.front().second+1});

        }

        if(q.front().first*10+1<=b){

            q.push({q.front().first*10+1,q.front().second+1});

        }

        q.pop();

    }

    int i=-1;

    if(cnt==123456789) cout<<i;

    else cout<<cnt;

    return 0;

}