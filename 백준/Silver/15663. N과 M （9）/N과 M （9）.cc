#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m;

vector<int> input;

vector<int> num;

vector<bool> check;

vector<int> back;

int x=0;

int select(){

    if(input.size()==m){

        for(int i=0;i<m;i++){

            cout<<input[i]<<" ";

        }

        cout<<"\n";

        return 0;

    }

    int k=0;

    for(int i=0;i<num.size();i++){

        if(check[i]==0&&k!=num[i]){

            k=num[i];

            check[i]=1;

            input.push_back(num[i]);

            select();

            check[i]=0;

            input.pop_back();

        }

    }

    return 0;

}

int main(){

    FAST_IO;

    cin>>n>>m;

    for(int i=1;i<=n;i++){

        int x;

        cin>>x;

        num.push_back(x);

    }

    sort(num.begin(),num.end());

    check.resize(num.size(),0);

    back.resize(num.size());

    select();

    return 0;

}