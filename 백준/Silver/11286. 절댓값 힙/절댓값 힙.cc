#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

struct cmp{

    bool operator()(int a,int b){

        if(abs(a)>abs(b)) return true;

        else if(abs(a)==abs(b))

            if(a>b) return true;

            else return false;

        return false;

    }

};

int main(){

    FAST_IO;

    int n;

    cin>>n;

    priority_queue<int,vector<int>,cmp> pq;

    for(int i=0;i<n;i++){

        int k;

        cin>>k;

        if(k==0){

            if(!pq.size()) cout<<'0'<<"\n";

            else{

                cout<<pq.top()<<"\n";

                pq.pop();

            }

        }

        else pq.push(k);

    }

    return 0;

}