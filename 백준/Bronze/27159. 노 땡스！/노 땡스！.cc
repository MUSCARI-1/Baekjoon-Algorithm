#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,cnt=0,nowMin=0;

    cin>>n;

    cin>>nowMin;

    cnt+=nowMin;

    for(int i=1;i<n;i++){

        int a;

        cin>>a;

        if(nowMin+1==a){

            nowMin=a;

            continue;

        }

        nowMin=a;

        cnt+=a;

    }

    cout<<cnt;

    return 0;

}