#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int t,a,b;

    cin>>t;

    for(int i=0;i<t;i++){

        cin>>a>>b;

        long long result=1;

        int r=1;

        for(int i=b;i>b-a;i--){

            result*=i;

            result/=r++;

        }

        cout<<result<<endl;

    }

    return 0;

}