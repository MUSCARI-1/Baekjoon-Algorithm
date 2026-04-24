#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string str;

    int n;

    cin>>n;

    queue<int> q;

    for(int i=0;i<n;i++){

        cin>>str;

        int k;

        if(str=="push"){

            cin>>k;

            q.push(k);

        }

        else if(str=="pop"){

            if(q.size()==0) cout<<"-1"<<"\n";

            else{

                cout<<q.front()<<"\n";

                q.pop();

            }

        }

        else if(str=="size") cout<<q.size()<<"\n";

        else if(str=="empty"){

            if(q.size()==0) cout<<'1'<<"\n";

            else cout<<'0'<<"\n";

        }

        else if(str=="front"){

            if(q.size()==0) cout<<"-1"<<"\n";

            else cout<<q.front()<<"\n";

        }

        else{

            if(q.size()==0) cout<<"-1"<<"\n";

            else cout<<q.back()<<"\n";

        }

    }

    return 0;

}