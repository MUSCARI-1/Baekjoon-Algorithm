#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int cnt=0;

int isPalindrome(string s){

    for(int i=0;i<s.size();i++){

        cnt++;

        if(s[i]!=s[s.size()-i-1]){

            return 0;

        }

        else if(i>=s.size()-i-1) return 1;

    }

}

int main(){

    FAST_IO;

    int t;

    cin>>t;

    string s;

    for(int i=0;i<t;i++){

        cin>>s;

        cout<<isPalindrome(s)<<" "<<cnt<<"\n";

        cnt=0;

    }

}