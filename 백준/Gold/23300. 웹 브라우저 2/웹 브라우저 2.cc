#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,q,c;

    cin>>n>>q;

    int now1=0;

    int now2=0;

    vector<pair<int,int>> cost;//first:웹 번호 second:웹 캐시가격

    deque<pair<int,int>> b;

    deque<pair<int,int>> f;

    cost.push_back({-1,-1});

    for(int i=1;i<=n;i++){

        cost.push_back({i,0});

    }

    int cnt=0;

    for(int i=0;i<q;i++){

        char cmd;

        cin>>cmd;

        if(cmd=='B'){

            if(b.size()==0) continue;

            f.push_front({now1,now2});

            now1=b.back().first;

            now2=b.back().second;

            b.pop_back();

        }

        else if(cmd=='F'){

            if(f.size()==0) continue;

            b.push_back({now1,now2});

            now1=f.front().first;

            now2=f.front().second;

            f.pop_front();

        }

        else if(cmd=='A'){

            while(f.size()!=0){

                cnt-=f.front().second;

                f.pop_front();

            }

            if(now1!=0) b.push_back({now1,now2});

            int k;

            cin>>k;

            now1=cost[k].first;

            now2=cost[k].second;

            cnt+=now2;

        }

        else{

            if(b.size()==0){

                continue;

            }

            deque<pair<int,int>> v;

            while(b.size()!=0){

                v.push_back({b.front().first,b.front().second});

                b.pop_front();

            }

            int cash=v[0].first;

            b.push_back({v.front().first,v.front().second});

            v.pop_front();

            while(v.size()!=0){

                if(cash==v.front().first){

                    cnt-=v.front().second;

                    v.pop_front();

                }

                else{

                    b.push_back({v.front().first,v.front().second});

                    cash=v.front().first;

                    v.pop_front();

                }

            }

        }

    }

    cout<<now1<<endl;

    if(b.size()==0) cout<<"-1"<<endl;

    else{

        while(b.size()!=0){

            cout<<b.back().first<<" ";

            b.pop_back();

        }

        cout<<endl;

    }

    if(f.size()==0) cout<<"-1"<<endl;

    else{

        while(f.size()!=0){

            cout<<f.front().first<<" ";

            f.pop_front();

        }

        cout<<endl;

    }

    return 0;

}