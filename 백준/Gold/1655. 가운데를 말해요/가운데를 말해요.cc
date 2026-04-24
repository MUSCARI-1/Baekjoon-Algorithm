#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,x;

    cin>>n;

    priority_queue<int> L;

    priority_queue<int,vector<int>,greater<int>> R;

    for(int i=1;i<=n;i++){

        cin>>x;

        if(i==1) L.push(x);

        else if(i%2==0){

            if(x>L.top()) R.push(x);

            else{

                int k=L.top();

                L.pop();

                R.push(k);

                L.push(x);

            }

        }

        else{

            if(x<R.top()) L.push(x);

            else{

                int k=R.top();

                R.pop();

                L.push(k);

                R.push(x);

            }

        }

        cout<<L.top()<<"\n";

    }

    return 0;

}