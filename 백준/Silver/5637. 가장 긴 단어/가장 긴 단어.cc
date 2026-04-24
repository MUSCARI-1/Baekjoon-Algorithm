#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

string alpha="abcdefghijklmnopqrstuvwxyz";
string s="";

void oneWord(string k){
    vector<char> c;
    for(int i=0;i<k.size();i++){
        char a=k[i];
        if(a<=90 && a>=65)
            c.push_back(alpha[a-'A']);
        else if(a=='-'||(a<=122 && a>=97))
            c.push_back(a);
    }
    if (c.size()>s.size()){
        string change="";
        for(int i=0;i<c.size();i++) change.push_back(c[i]);
        s=change;
    }
}

int main(){
    FAST_IO
    while(true){
        string now;
        cin>>now;
        if(now=="E-N-D"){
            if(s.size()<5){
                cout<<"e-n-d"<<endl;
                return 0;
            }
            break;
        }
        oneWord(now);
    }
    cout<<s<<endl;
    return 0;
}