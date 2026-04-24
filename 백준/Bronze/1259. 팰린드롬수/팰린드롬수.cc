#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string str;

    while(0==0){

        cin>>str;

        if(str[0]=='0') return 0;

        int n=str.size()/2;

        bool c=0;

        for(int i=0;i<n;i++){

            if(str[i]!=str[str.size()-(i+1)]) c=1;

        }

        if(c) cout<<"no"<<"\n";

        else cout<<"yes"<<"\n";

    }

    return 0;

}