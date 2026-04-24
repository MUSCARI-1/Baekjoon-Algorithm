#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int t=0;

    while(0==0){

        t++;

        string str;

        cin>>str;

        int cnt=0;

        if(str[0]=='-') return 0;

        stack<char> s;

        for(int i=0;i<str.size();i++){

            if(str[i]=='{'){

                s.push(str[i]);

            }

            else{

                if(s.size()==0||s.top()!='{'){

                    cnt++;

                    s.push('{');

                }

                else s.pop();

            }

        }

        if(s.size()!=0) cnt+=s.size()/2;

        cout<<t<<". "<<cnt<<"\n";

    }

    return 0;

}