#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    for(int i=n;i>0;i--){

        for(int j=0;j<i;j++) cout<<'*';

        cout<<endl;

    }

    return 0;

}