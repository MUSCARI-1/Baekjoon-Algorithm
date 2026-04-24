#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<bool> check(1000001,0);

    check[n]=1;

    int mini=0;

    for(int i=1;i<n;i++){

        string str=to_string(i);

        int num=i;

        for(int j=0;j<str.size();j++){

            num+=str[j]-'0';

        }

        if(check[num]==1){

            cout<<i;

            return 0;

        }

    }

    cout<<mini;

    return 0;

}