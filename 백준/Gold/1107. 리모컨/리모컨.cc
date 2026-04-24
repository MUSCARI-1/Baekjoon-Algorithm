#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m,now=100,res=0;

vector<int> canPush;

vector<int> Select;

void makeNum(int x){

    if(x==Select.size()){

        int cnt=0;

        for(int i=0;i<x;i++){

            cnt*=10;

            cnt+=Select[i];

        }

        if(abs(n-cnt)<abs(n-now)) now=cnt;

        return;

    }

    for(int i=0;i<canPush.size();i++){

        Select.push_back(canPush[i]);

        makeNum(x);

        Select.pop_back();

    }

    return;

}

int main(){

    FAST_IO;

    cin>>n>>m;

    vector<bool> button(10,1);

    for(int i=0;i<m;i++){

        int a;

        cin>>a;

        button[a]=0;

    }

    for(int i=0;i<10;i++) if(button[i]) canPush.push_back(i);

    for(int i=1;i<=7;i++) makeNum(i);

    if(now!=100){

        string s=to_string(now);

        res+=s.size();

    }

    res+=abs(n-now);

    res=min(res,abs(n-100));

    cout<<res;

    return 0;

}