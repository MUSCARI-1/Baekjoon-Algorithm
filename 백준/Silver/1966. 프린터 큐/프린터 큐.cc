#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int solve(){

    int n,m;

    int cnt=1;

    cin>>n>>m;

    queue<int> q;

    for(int i=0;i<n;i++){

        int k;

        cin>>k;

        q.push(k);

    }

    while(0==0){

        int high=q.front();

        bool c=0;

        while(0==0){

            c=0;

            for(int i=1;i<=q.size();i++){

                q.push(q.front());

                q.pop();

                if(high<q.front()){

                    high=q.front();

                    c=1;

                    m-=i;

                    if(m<0) m+=q.size();

                    break;

                }

            }

            if(c==1) continue;

            break;

        }

        if(m==0){

            return cnt;

        }

        else{

            q.pop();

            cnt++;

            m--;

        }

    }

}

int main(){

    FAST_IO;

    int t;

    cin>>t;

    for(int i=0;i<t;i++) cout<<solve()<<endl;

    return 0;

}