#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    int cnt=0;

    vector<pair<string,bool>> v;

    for(int i=0;i<n;i++){

        string str;

        cin>>str;

        v.push_back({str,0});

    }

    queue<string> q;

    for(int i=0;i<n;i++){

        string str;

        cin>>str;

        q.push(str);

    }

    for(int i=0;i<n;i++){

        string str=q.front();

        q.pop();

        bool c=1;

        int pos=-1;

        for(int j=0;j<n;j++){

            if(v[j].first==str){

                pos=j;

                v[j].second=1;

                break;

            }

        }

        for(int j=0;j<pos;j++){

            if(v[j].second==0) c=0;

        }

        if(c==0) cnt++;

    }

    cout<<cnt;

    return 0;

}