#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF=987654321;

int main(){

    FAST_IO;

    int n,m,cnt=0;

    cin>>n>>m;

    string s;

    cin>>s;

    deque<char> dq;

    for(int i=0;i<m;i++){

        if(dq.size()==0){

            if(s[i]=='I') dq.push_back(s[i]);

            else continue;

        }

        else{

            if(dq.back()!=s[i]) dq.push_back(s[i]);

            else{

                while(dq.size()!=0) dq.pop_back();

                if(s[i]=='I') dq.push_back(s[i]);

            }

        }

        if(dq.size()==2*n+1){

            cnt++;

            dq.pop_front();

            dq.pop_front();

        }

    }

    cout<<cnt;

    return 0;

}