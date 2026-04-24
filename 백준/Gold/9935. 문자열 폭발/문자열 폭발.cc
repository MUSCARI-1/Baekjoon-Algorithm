#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string str;

    string bomb;

    cin>>str>>bomb;

    deque<char> res;

    stack<char> s;

    for(int i=0;i<str.size();i++) s.push(str[i]);

    while(s.size()!=0){

        char c=s.top();

        s.pop();

        if(c==bomb[bomb.size()-1]){

            res.push_front(c);

            bool k=0;

            for(int i=bomb.size()-2;i>=0;i--){

                if(s.size()==0){

                    k=1;

                    break;

                }

                c=s.top();

                char p=c;

                s.pop();

                if(c!=bomb[i]){

                    k=1;

                    if(c==bomb[bomb.size()-1]){s.push(p); break;}

                    res.push_front(c);

                    break;

                }

                res.push_front(c);

            }

            if(k==0){

                for(int i=0;i<bomb.size();i++) res.pop_front();

                for(int i=0;i<bomb.size()-1;i++){

                    s.push(res.front());

                    res.pop_front();

                }

            }

        }

        else{

            res.push_front(c);

        }

    }

    if(res.size()==0) cout<<"FRULA";

    while(res.size()!=0){

        cout<<res.front();

        res.pop_front();

    }

    return 0;

}