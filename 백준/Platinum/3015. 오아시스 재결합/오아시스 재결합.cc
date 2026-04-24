#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    long long n,cnt=0;

    cin>>n;

    vector<long long> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    stack<pair<long long,long long>> s;

    s.push({v[n-1],1});

    for(int i=n-2;i>=0;i--){

        long long x=v[i];

        long long plus=0;

        long long sec=0;

        bool same=0;

        while(s.size()!=0&&x>=s.top().first){

            if(x>s.top().first){

                plus+=s.top().second;

                s.pop();

            }

            else{

                plus+=s.top().second;

                sec=s.top().second+1;

                s.pop();

                same=1;

            }

        }

        if(s.size()!=0) plus++;

        if(same){

            s.push({x,sec});

        }

        else s.push({x,1});

        cnt+=plus;

    }

    cout<<cnt;

    return 0;

}