#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    string s;
    int n;
    cin>>n;
    cin.ignore();
    for(int l=0;l<n;l++){
        getline(cin,s);
        s+=' ';
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                for(int j=st.size();j>0;j--){
                    cout<<st.top();
                    st.pop();
                }
                cout<<" ";
            }
            else st.push(s[i]);
        }
        cout<<"\n";
    }
    return 0;
}