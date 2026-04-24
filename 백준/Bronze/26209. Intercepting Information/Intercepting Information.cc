#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    for(int i=0;i<8;i++){

        cin>>n;

        if(n!=0&&n!=1){

            cout<<'F';

            return 0;

        }

    }

    cout<<'S';

    return 0;

}