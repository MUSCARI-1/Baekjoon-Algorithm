#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    for(int i=0;i<n;i++){

        string s;

        cin>>s;

        if(s.size()>=6&&s.size()<=9) cout<<"yes"<<"\n";

        else cout<<"no"<<"\n";

    }

    return 0;

}