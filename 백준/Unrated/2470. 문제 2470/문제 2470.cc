#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,k,cnt=0;

    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    int p1=0,p2=n-1,d1=v[0],d2=v[n-1];

    while(p1<p2){

        int x=v[p1]+v[p2];

        if(abs(x)<abs(d1+d2)){

            d1=v[p1];

            d2=v[p2];

            if(x>0) p2--;

            else p1++;

        }

        else if(x>0) p2--;

        else p1++;

    }

    cout<<d1<<" "<<d2;

    return 0;

}