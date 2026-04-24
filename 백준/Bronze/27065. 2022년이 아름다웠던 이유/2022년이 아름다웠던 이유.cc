#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=1234567890;

int main(){

    FAST_IO;

    int n,t;

    cin>>t;

    for(int i=0;i<t;i++){

        cin>>n;

        vector<int> v;

        for(int i=1;i<n;i++) if(n%i==0) v.push_back(i);

        int s=0;

        for(int i=0;i<v.size();i++) s+=v[i];

        bool c=1;

        if(n>=s) c=0;

        else{

            for(int i=0;i<v.size();i++){

                int k=v[i];

                vector<int> vv;

                for(int j=1;j<k;j++) if(k%j==0) vv.push_back(j);

                int ss=0;

                for(int j=0;j<vv.size();j++) ss+=vv[j];

                if(k<ss){

                    c=0;

                    break;

                }

            }

        }

        if(!c) cout<<"BOJ 2022"<<"\n";

        else cout<<"Good Bye"<<"\n";

    }

    return 0;

}