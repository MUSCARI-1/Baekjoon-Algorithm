#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string str;

    int n,k;

    cin>>n;

    queue<int> q;

    while(0==0){

        cin>>k;

        if(k==-1) break;

        else if(k==0) q.pop();

        else{

            if(q.size()==n) continue;

            else{

                q.push(k);

            }

        }

    }

    if(q.size()==0){

        cout<<"empty";

        return 0;

    }

    while(q.size()!=0){

        cout<<q.front()<<" ";

        q.pop();

    }

    return 0;

}