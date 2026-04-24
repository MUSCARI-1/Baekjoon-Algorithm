#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string str;

    char i='.';

    while(0==0){

        getline(cin,str);

        stack<char> s;

        bool c=0;

        if(str[0]=='.') return 0;

        for(int i=0;i<str.size();i++){

            if(str[i]=='('||str[i]=='['){

                s.push(str[i]);

            }

            else if(str[i]==')'){

                if(s.size()==0||s.top()!='('){

                    cout<<"no"<<"\n";

                    c=1;

                    break;

                }

                else s.pop();

            }

            else if(str[i]==']'){

                if(s.size()==0||s.top()!='['){

                    cout<<"no"<<"\n";

                    c=1;

                    break;

                }

                else s.pop();

            }

        }

        if(c==1) continue;

        else if(s.size()!=0) cout<<"no"<<"\n";

        else cout<<"yes"<<"\n";

    }

    return 0;

}