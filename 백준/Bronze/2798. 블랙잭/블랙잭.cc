#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m;

int cnt=0;

int main(){

    FAST_IO;

    cin>>n>>m;

    vector<int> card(n);

    for(int i=0;i<n;i++) cin>>card[i];

    vector<int> select;

    for(int i=0;i<n;i++){

        select.push_back(card[i]);

        for(int j=i+1;j<n;j++){

            select.push_back(card[j]);

            for(int l=j+1;l<n;l++){

                select.push_back(card[l]);

                int now_cnt=select[0]+select[1]+select[2];

                if(now_cnt>cnt&&now_cnt<=m) cnt=now_cnt;

                select.pop_back();

            }

            select.pop_back();

        }

        select.pop_back();

    }

    cout<<cnt;

}