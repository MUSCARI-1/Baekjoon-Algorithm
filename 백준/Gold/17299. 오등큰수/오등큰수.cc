#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<int> v(n);

    vector<int> cnt(1000001,0);

    vector<int> res(n);

    for(int i=0;i<n;i++){

        cin>>v[i];

        cnt[v[i]]++;

    }

    res[n-1]=-1;

    stack<int> s;

    s.push(v[n-1]);

    for(int i=n-2;i>=0;i--){

        int now=cnt[v[i]];

        int no=-1;

        while(s.size()!=0){

            int t=cnt[s.top()];

            int b=s.top();

            if(now<t){

                res[i]=b;

                s.push(v[i]);

                break;

            }

            s.pop();

        }

        if(s.size()==0){

            res[i]=no;

            s.push(v[i]);

        }

    }

    for(int i=0;i<n;i++) cout<<res[i]<<" ";

    return 0;

}