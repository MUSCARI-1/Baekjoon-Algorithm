#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    stack<int> s;

    int pnt=0;

    string str="\0";

    for(int i=1;i<=n;i++){

        int k;

        cin>>k;

        if(pnt<k){

            while(pnt!=k){

                pnt++;

                s.push(pnt);

                str.push_back('+');

            }

            s.pop();

            str.push_back('-');

        }

        else{

            if(s.top()==k){

                s.pop();

                str.push_back('-');

            }

            else{

                cout<<"NO";

                return 0;

            }

        }

    }

    for(int i=0;i<str.size();i++) cout<<str[i]<<"\n";

    return 0;

}