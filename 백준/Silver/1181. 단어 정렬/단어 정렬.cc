#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    FAST_IO;

    int t;

    string str;

    vector<pair<int,string>> word;

    cin>>t;

    for(int i=0;i<t;i++){

        cin>>str;

        bool check=1;

        for(int j=0;j<word.size();j++){

            if(str==word[j].second){

                check=0;

                break;

            }

        }

        if(!check) continue;

        word.push_back({str.size(),str});

    }

    sort(word.begin(),word.end());

    for(int i=0;i<word.size();i++){

        cout<<word[i].second<<"\n";

    }

    return 0;

}