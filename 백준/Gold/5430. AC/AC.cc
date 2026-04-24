#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int solve(){

    string cmd,str,num;

    int n;

    cin>>cmd>>n>>str;

    deque<int> dq;

    for(int i=1;i<str.size();i++){

        if(str[i]==']'){

            if(num=="\0") break;

            int k=stoi(num);

            dq.push_back(k);

            break;

        }

        else if(str[i]==','){

            int k=stoi(num);

            dq.push_back(k);

            num.clear();

        }

        else{

            num.push_back(str[i]);

        }

    }

    bool c=0;

    for(int i=0;i<cmd.size();i++){

        if(cmd[i]=='R'){

            if(c==0) c=1;

            else c=0;

        }

        else{

            if(dq.size()==0){

                cout<<"error"<<"\n";

                return 0;

            }

            else{

                if(c==0) dq.pop_front();

                else dq.pop_back();

            }

        }

    }

    cout<<'[';

    int z=dq.size();

    if(c==0){

        for(int i=0;i<z;i++){

            cout<<dq.front();

            dq.pop_front();

            if(i==z-1) break;

            cout<<',';

        }

    }

    else{

        for(int i=0;i<z;i++){

            cout<<dq.back();

            dq.pop_back();

            if(i==z-1) break;

            cout<<',';

        }

    }

    cout<<']'<<"\n";

    return 0;

}

int main(){

    FAST_IO;

    int t;

    cin>>t;

    for(int i=0;i<t;i++) solve();

    return 0;

}