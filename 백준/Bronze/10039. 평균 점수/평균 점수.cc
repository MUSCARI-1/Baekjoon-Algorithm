#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,cnt=0;

    for(int i=0;i<5;i++){

        cin>>n;

        if(n<=40) cnt+=40;

        else cnt+=n;

    }

    cnt/=5;

    cout<<cnt;

    return 0;

}