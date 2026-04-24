#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m;

    cin>>n>>m;

    set<int> s1;

    set<int> s2;

    vector<int> n1;

    vector<int> n2;

    int num;

    for(int i=0;i<n;i++){

        cin>>num;

        s1.insert(num);

        n1.push_back(num);

    }

    for(int i=0;i<m;i++){

        cin>>num;

        s2.insert(num);

        n2.push_back(num);

    }

    int sz=s1.size()+s2.size();

    for(int i=0;i<n;i++){

        if(s2.find(n1[i])==s2.end()) s1.erase(n1[i]);

    }

    for(int i=0;i<m;i++){

        if(s1.find(n2[i])==s1.end()) s2.erase(n2[i]);

    }

    sz=sz-(s1.size()+s2.size());

    cout<<sz;

    return 0;

}