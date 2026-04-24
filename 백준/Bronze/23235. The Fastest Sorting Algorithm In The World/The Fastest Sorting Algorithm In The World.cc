#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int a=1,k;

    while(1){

        int n;

        cin>>n;

        if(n==0) break;

        for(int i=0;i<n;i++) cin>>k;

        cout<<"Case "<<a<<": Sorting... done!"<<"\n";

        a++;

    }

    return 0;

}