#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m;

    cin>>n>>m;

    map<int,string> poke;

    map<string,int> reverse;

    string str;

    for(int i=1;i<=n;i++){

        cin>>str;

        poke[i]=str;

        reverse[str]=i;

    }

    for(int i=0;i<m;i++){

        cin>>str;

        if(isdigit(str[0])!=0){

            int a=stoi(str);

            cout<<poke[a]<<"\n";

        }

        else{

            cout<<reverse[str]<<"\n";

        }

    }

    return 0;

}