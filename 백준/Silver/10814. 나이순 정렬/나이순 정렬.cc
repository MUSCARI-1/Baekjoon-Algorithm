#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

bool compare(pair<int,string> a,pair<int,string> b){

    return a.first<b.first;

}

int main(){

    FAST_IO;

    int t,age;

    string str;

    vector<pair<int,string>> word;

    cin>>t;

    for(int i=0;i<t;i++){

        cin>>age>>str;

        word.push_back({age,str});

    }

    stable_sort(word.begin(),word.end(),compare);

    for(int i=0;i<word.size();i++){

        cout<<word[i].first<<" "<<word[i].second<<"\n";

    }

    return 0;

}