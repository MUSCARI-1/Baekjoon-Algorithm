#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST_IO;
    string str;
    cin>>str;
    stack<int> s;
    for(int i=0;i<str.size();i++){
        if(str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/'){
            int k=str[i]-'0';
            s.push(k);
        }
        else{
            int b=s.top();
            s.pop();
            int a=s.top();
            s.pop();
            int c;
            if(str[i]=='+') c=a+b;
            else if(str[i]=='-') c=a-b;
            else if(str[i]=='*') c=a*b;
            else c=a/b;
            s.push(c);
        }
    }
    cout<<s.top();
    return 0;
}