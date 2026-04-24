#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,k;

    cin>>n;

    vector<int> v(4,0);//STRAWBERRY=0,BANANA=1,LIME=2,PLUM=3

    for(int i=0;i<n;i++){

        string s;

        cin>>s>>k;

        if(s=="STRAWBERRY") v[0]+=k;

        if(s=="BANANA") v[1]+=k;

        if(s=="LIME") v[2]+=k;

        if(s=="PLUM") v[3]+=k;

    }

    bool c=0;

    for(int i=0;i<4;i++) if(v[i]==5) c=1;

    if(c) cout<<"YES";

    else cout<<"NO";

    return 0;

}