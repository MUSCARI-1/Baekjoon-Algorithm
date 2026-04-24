#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,k,cnt=0;

    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    cin>>k;

    sort(v.begin(),v.end());

    int p1=0,p2=n-1;

    while(p1<p2){

        int x=v[p1]+v[p2];

        if(x==k){

            cnt++;

            p1++;

            p2--;

        }

        else if(x>k) p2--;

        else p1++;

    }

    cout<<cnt;

    return 0;

}