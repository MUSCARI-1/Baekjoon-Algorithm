#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m;

vector<int> input;

vector<int> num;

vector<bool> check;

int select(){

    if(input.size()==m){

        for(int i=0;i<input.size();i++) cout<<input[i]<<" ";

        cout<<"\n";

        return 0;

    }

    for(int i=0;i<num.size();i++){

        if(0==0){

            input.push_back(num[i]);

            select();

            input.pop_back();

        }

    }

    return 0;

}

int main(){

    FAST_IO;

    cin>>n>>m;

    for(int i=1;i<=n;i++) num.push_back(i);

    check.resize(num.size());

    for(int i=0;i<num.size();i++) check[i]=0;

    select();

    return 0;

}