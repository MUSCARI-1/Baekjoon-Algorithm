#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m;

    set<int> s;

    cin>>n;

    for(int i=0;i<n;i++){

        int have;

        cin>>have;

        s.insert(have);

    }

    cin>>m;

    for(int i=0;i<m;i++){

        int check;

        cin>>check;

        int z=0;

        int x=1;

        if(s.find(check)!=s.end()) cout<<x<<" ";

        else cout<<z<<" ";

    }

    return 0;

}