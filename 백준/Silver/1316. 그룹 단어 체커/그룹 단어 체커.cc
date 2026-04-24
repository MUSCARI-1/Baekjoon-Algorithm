#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<set>

#include<map>

#include<cmath>

#include<string>

#include<iomanip>

using namespace std;

int cnt=0;

int t;

int make(){

    

    return 0;

}

int solve(){

    string str;

    char front='A';

    string alpha="abcdefghijklmnopqrstuvwxyz";

    vector<bool> check(26,0);

    cin>>str;

    for(int i=0;i<str.size();i++){

        for(int j=0;j<26;j++){

            if(str[i]==alpha[j]){

                if(check[j]==1){

                    if(front!=str[i]) return 0;

                    else{

                        continue;

                    }

                }

                else{

                    check[j]=1;

                    front=str[i];

                }

            }

        }

    }

    cnt++;

    return 0;

}

int main(){

    cin>>t;

    for(int i=0;i<t;i++) solve();

    cout<<cnt;

    return 0;

}