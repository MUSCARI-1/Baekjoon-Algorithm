#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int pnt=0;
    while(pnt<str.size()){
        int p=-1;
        for(int i=0;i<52;i++) if(str[pnt]==alpha[i]) p=i;
        if(p<26) str[pnt]=alpha[p+26];
        else str[pnt]=alpha[p-26];
        pnt++;
    }
    cout<<str;
    return 0;
}