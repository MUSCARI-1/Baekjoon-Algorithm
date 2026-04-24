#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=1234567890;

bool compare(tuple<int,int,int,string> p1,tuple<int,int,int,string> p2){

    if(get<0>(p1)==get<0>(p2)&&get<1>(p1)==get<1>(p2)

    &&get<2>(p1)==get<2>(p2)) return get<3>(p1)<get<3>(p2);

    else if(get<0>(p1)==get<0>(p2)&&get<1>(p1)==get<1>(p2))

        return get<2>(p1)>get<2>(p2);

    else if(get<0>(p1)==get<0>(p2)) return get<1>(p1)<get<1>(p2);

    else return get<0>(p1)>get<0>(p2);

}

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<tuple<int,int,int,string>> v;

    for(int i=0;i<n;i++){

        string s;

        int a,b,c;

        cin>>s>>a>>b>>c;

        v.push_back({a,b,c,s});

    }

    sort(v.begin(),v.end(),compare);

    for(int i=0;i<n;i++) cout<<get<3>(v[i])<<"\n";

    return 0;

}