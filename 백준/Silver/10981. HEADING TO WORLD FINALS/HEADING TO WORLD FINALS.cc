#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool compare(tuple<int,int,string,string> p1,tuple<int,int,string,string> p2){

    if(get<0>(p1)==get<0>(p2)) return get<1>(p1)<get<1>(p2);

    return get<0>(p1)>get<0>(p2);

}

int main(){

    FAST_IO;

    int n,k;

    cin>>n>>k;

    vector<tuple<int,int,string,string>> v;

    for(int i=0;i<n;i++){

        int a,b;

        string s,s2;

        cin>>s2;

        cin>>s>>a>>b;

        v.push_back({a,b,s,s2});

    }

    sort(v.begin(),v.end(),compare);

    set<string> s;

    int p=0;

    int p2=0;

    while(p!=k){

        string str=get<2>(v[p2]);

        string str2=get<3>(v[p2]);

        if(s.find(str2)==s.end()){

            cout<<str<<"\n";

            s.insert(str2);

            p++;

        }

        p2++;

    }

    return 0;

}