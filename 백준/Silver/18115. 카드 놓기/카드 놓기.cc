#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,k;

    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    deque<int> dq;

    for(int i=1;i<=n;i++){

        if(v[n-i]==1){

            dq.push_front(i);

        }

        else if(v[n-i]==2){

            k=dq.front();

            dq.pop_front();

            dq.push_front(i);

            dq.push_front(k);

        }

        else{

            dq.push_back(i);

        }

    }

    for(int i=0;i<n;i++){

        cout<<dq.front()<<" ";

        dq.pop_front();

    }

    return 0;

}