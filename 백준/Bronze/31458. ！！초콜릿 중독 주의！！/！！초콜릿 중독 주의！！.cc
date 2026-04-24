#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int solve(){
    int logical=0,now=-1,numberX=-1;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='!') logical++;
        else{
            if(s[i]=='1') now=1;
            else now=0;
            break;
        }
    }
    if(s[s.size()-1]=='!') now=1;
    if(logical%2==1){
        if(now==1) now=0;
        else now=1;
    }
    cout<<now<<endl;
    return 0;
}

int main(){
    FAST_IO
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solve();
    return 0;
}