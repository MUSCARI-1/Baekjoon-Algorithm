#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    cout<<fixed;

    cout.precision(12);

    int n;

    cin>>n;

    vector<long double> slope;

    for(int i=0;i<n;i++){

        long double a,b,c,m;

        cin>>a>>b>>c;

        m=-a/b;

        slope.push_back(m);

    }

    sort(slope.begin(),slope.end());

    long long cnt=0;

    int p=1;

    int s=1;

    long double copy=slope[0];

    while(p!=slope.size()){

        if(copy==slope[p]) s++;

        else{

            cnt+=s*(slope.size()-p);

            s=1;

            copy=slope[p];

        }

        p++;

    }

    cout<<cnt;

    return 0;

}