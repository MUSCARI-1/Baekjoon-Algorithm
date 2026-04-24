#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=1234567890;

int main(){

    FAST_IO;

    int n,cnt=0,p=0;

    string s;

    cin>>s;

    n=s.size();

    stack<char> st;

    while(p<n){

        if(s[p]=='('&&s[p+1]==')'){

            cnt+=st.size();

            p+=2;

        }

        else if(s[p]=='('){

            cnt++;

            st.push('(');

            p++;

        }

        else{

            st.pop();

            p++;

        }

    }

    cout<<cnt;

    return 0;

}