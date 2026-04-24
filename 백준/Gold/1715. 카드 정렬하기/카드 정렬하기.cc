#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,x,cnt=0;

    cin>>n;

    priority_queue<int> pq;

    for(int i=0;i<n;i++){

        cin>>x;

        pq.push(-x);

    }

    while(pq.size()!=1){

        int a=-pq.top();

        pq.pop();

        int b=-pq.top();

        pq.pop();

        int c=a+b;

        cnt+=c;

        pq.push(-c);

    }

    cout<<cnt;

    return 0;

}