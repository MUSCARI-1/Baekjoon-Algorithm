#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string str;

    cin>>str;

    set<string> s;

    for(int i=0;i<str.size();i++){

        for(int j=1;j<str.size()+1;j++){

            string input=str.substr(i,j);

            s.insert(input);

        }

    }

    cout<<s.size();

    return 0;

}