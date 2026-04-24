#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

string str;

int n;

vector<bool> c(51,0);

vector<int> v;

int p=0;

int one(int p);

int two(int p);

int one(int p){

    if(p==str.size()){

        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";

        exit(0);

    }

    else{

        if(str[p]=='0'){

            return 0;

        }

        else{

            int k=str[p]-'0';

            if(c[k]==1||k>n){

                return 0;

            }

            v.push_back(k);

            c[k]=1;

            two(p+1);

            one(p+1);

            c[k]=0;

            v.pop_back();

        }

    }

    return 0;

}

int two(int p){

    if(p==str.size()){

        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";

        exit(0);

    }

    if(p==str.size()-1) return 0;

    string num;

    num.push_back(str[p]);

    num.push_back(str[p+1]);

    int k=stoi(num);

    if(str[p]=='0'){

        return 0;

    }

    else{

        if(c[k]==1||k>n){

            return 0;

        }

        v.push_back(k);

        c[k]=1;

        two(p+2);

        one(p+2);

        c[k]=0;

        v.pop_back();

    }

    one(p);

    return 0;

}

int main(){

    FAST_IO;

    cin>>str;

    if(str.size()<=9) n=str.size();

    else n=9+(str.size()-9)/2;

    c[0]=1;

    two(0);

    one(0);

    return 0;

}