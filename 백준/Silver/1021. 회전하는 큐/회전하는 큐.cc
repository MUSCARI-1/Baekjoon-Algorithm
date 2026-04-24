#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m;

    int cnt=0;

    cin>>n>>m;

    deque<int> dq;

    for(int i=1;i<=n;i++) dq.push_back(i);

    for(int i=0;i<m;i++){

        int k;

        cin>>k;

        if(dq.front()==k){

            dq.pop_front();

            continue;

        }

        else{

            int two=0;

            int thr=0;

            while(dq.front()!=k){

                dq.push_back(dq.front());

                dq.pop_front();

                two++;

            }

            for(int i=0;i<two;i++){

                dq.push_front(dq.back());

                dq.pop_back();

            }

            while(dq.front()!=k){

                dq.push_front(dq.back());

                dq.pop_back();

                thr++;

            }

            for(int i=0;i<thr;i++){

                dq.push_back(dq.front());

                dq.pop_front();

            }

            if(two<thr){

                for(int i=0;i<two;i++){

                    dq.push_back(dq.front());

                    dq.pop_front();

                }

                dq.pop_front();

                cnt+=two;

            }

            else{

                for(int i=0;i<thr;i++){

                    dq.push_front(dq.back());

                    dq.pop_back();

                }

                dq.pop_front();

                cnt+=thr;

            }

        }

    }

    cout<<cnt;

    return 0;

}