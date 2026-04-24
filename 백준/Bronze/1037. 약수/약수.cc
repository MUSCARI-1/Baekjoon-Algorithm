#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,num;

    int low=1234567890;

    int high=0;

    cin>>n;

    for(int i=0;i<n;i++){

        cin>>num;

        low=min(num,low);

        high=max(num,high);

    }

    cout<<low*high;

    return 0;

}