#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n;

void search(queue<pair<int,int>> &q,vector<pair<int,int>> &v,vector<bool> &c,int x,int y){

    for(int i=1;i<n+1;i++){

        if(c[i]==1) continue;

        if(abs(x-v[i].first)+abs(y-v[i].second)<=1000){

            c[i]=1;

            q.push({v[i].first,v[i].second});

        }

    }

}

string solve(){

    cin>>n;

    vector<pair<int,int>> v;

    vector<bool> c(n+1,0);

    for(int i=0;i<n+2;i++){

        int x,y;

        cin>>x>>y;

        v.push_back({x,y});

    }

    queue<pair<int,int>> q;

    q.push({v[0].first,v[0].second});

    while(q.size()!=0){

        int x=q.front().first;

        int y=q.front().second;

        q.pop();

        int z=abs(x-v[n+1].first)+abs(y-v[n+1].second);

        //cout<<x<<" "<<y<<endl;

        if(z<=1000) return "happy";

        search(q,v,c,x,y);

    }

    return "sad";

}

int main(){

    FAST_IO;

    int t;

    cin>>t;

    for(int i=0;i<t;i++) cout<<solve()<<"\n";

    return 0;

}