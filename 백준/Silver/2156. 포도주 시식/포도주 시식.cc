#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<int> num(n);

    vector<int> maxi(n,0);

    for(int i=0;i<n;i++) cin>>num[i];

    if(n<=2){

        if(n==1){

            cout<<num[0];

            return 0;

        }

        if(n==2){

            cout<<num[0]+num[1];

            return 0;

        }

    }

    maxi[0]=num[0];

    maxi[1]=maxi[0]+num[1];

    maxi[2]=max(maxi[0]+num[2],num[1]+num[2]);

    maxi[2]=max(maxi[2],maxi[1]);

    for(int i=3;i<n;i++){

        maxi[i]=max(maxi[i-2]+num[i],maxi[i-3]+num[i-1]+num[i]);

        maxi[i]=max(maxi[i-1],maxi[i]);

    }

    cout<<maxi[n-1];

    return 0;

}