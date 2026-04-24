#include<bits/stdc++.h>

using namespace std;

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    string str;

    cin>>str;

    vector<char> num(100);

    for(int i=0;i<str.size();i++){

        num[i]=str[i];

    }

    sort(num.begin(),num.end(),greater<char>());

    for(int i=0;i<str.size();i++){

        cout<<num[i];

    }

    return 0;

}