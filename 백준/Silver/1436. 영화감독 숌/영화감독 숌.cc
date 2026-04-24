#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int cnt=0;

int main(){

    FAST_IO;

    int n;

    cin>>n;

    for(int i=666;i>0;i++){

        string num=to_string(i);

        for(int j=0;j<num.size()-2;j++){

            if(num[j]=='6'&&num[j+1]=='6'&&num[j+2]=='6'){

                cnt++;

                break;

            }

        }

        if(n==cnt){

            cout<<i;

            return 0;

        }

    }

}