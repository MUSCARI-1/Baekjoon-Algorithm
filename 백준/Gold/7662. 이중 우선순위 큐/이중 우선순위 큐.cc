#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

long long solve(){

    long long n,size=0;

    cin>>n;

    priority_queue<pair<long long,int>> pq1;//최대

    priority_queue<pair<long long,int>> pq2;//최소, 넣을때 -로 변환

    vector<bool> c(n,1);

    for(int i=0;i<n;i++){

        char a;

        long long k;

        cin>>a>>k;

        if(a=='I'){

            pq1.push({k,i});

            pq2.push({-k,i});

            size++;

        }

        else if(k==1){

            if(size==0) continue;

            c[pq1.top().second]=0;

            pq1.pop();

            size--;

        }

        else{

            if(size==0) continue;

            c[pq2.top().second]=0;

            pq2.pop();

            size--;

        }

        if(size==0){

            for(int j=0;j<pq1.size();j++) pq1.pop();

            for(int j=0;j<pq2.size();j++) pq2.pop();

        }

        while(pq1.size()!=0&&!c[pq1.top().second]) pq1.pop();

        while(pq2.size()!=0&&!c[pq2.top().second]) pq2.pop();

    }

    if(size==0) cout<<"EMPTY"<<"\n";

    else cout<<pq1.top().first<<" "<<-pq2.top().first<<"\n";

    return 0;

}

int main(){

    FAST_IO;

    int t;

    cin>>t;

    for(int i=0;i<t;i++) solve();

    return 0;

}