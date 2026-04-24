#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int t;

    int r1;

    cin>>t>>r1;

    int rn;

    for(int i=1;i<t;i++){

        cin>>rn;

        int copy=r1;

        int small=min(copy,rn);

        for(int j=small;j>=1;j--){

            if(copy%j==0&&rn%j==0){

                copy/=j;

                rn/=j;

                cout<<copy<<'/'<<rn<<endl;

                break;

            }

        }

    }

    return 0;

}