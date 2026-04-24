#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int aver=0;

    vector<int> v(5);

    for(int i=0;i<5;i++){

        cin>>v[i];

        aver+=v[i];

    }

    sort(v.begin(),v.end());

    cout<<aver/5<<endl<<v[2];

    return 0;

}