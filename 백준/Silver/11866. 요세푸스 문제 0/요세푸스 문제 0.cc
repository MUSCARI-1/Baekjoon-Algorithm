#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string str;

    int n,k;

    cin>>n>>k;

    queue<int> q;

    for(int i=1;i<=n;i++) q.push(i);

    cout<<'<';

    while(q.size()!=0){

        for(int i=0;i<k-1;i++){

            q.push(q.front());

            q.pop();

        }

        cout<<q.front();

        q.pop();

        if(q.size()!=0) cout<<", ";

    }

    cout<<'>';

    return 0;

}