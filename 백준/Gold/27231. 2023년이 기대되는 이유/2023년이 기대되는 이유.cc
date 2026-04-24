#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<bool> plusC(10,0);

long long INF=1234567890;

int n;

long long brute(vector<long long> numPlace,vector<int> &v,

int plusNum,int use,int pnt){

    if(plusNum==use){

        int total=0;

        int zone=0;

        for(int i=0;i<n;i++){

            zone*=10;

            zone+=numPlace[i];

            if(plusC[i]){

                total+=zone;

                zone=0;

            }

        }

        if(zone!=0) total+=zone;

        v.push_back(total);

        return 0;

    }

    for(int i=pnt;i<n-1;i++){

        plusC[i]=1;

        brute(numPlace,v,plusNum,use+1,i+1);

        plusC[i]=0;

    }

    return 0;

}

int solve(){

    string s;

    cin>>s;

    n=s.size();

    int res=0;

    vector<long long> numPlace(n);

    vector<int> v;

    for(int i=0;i<n;i++) numPlace[i]=s[i]-'0';

    bool c=0;

    for(int i=0;i<n;i++) if(numPlace[i]>1) c=1;

    if(!c){

        cout<<"Hello, BOJ 2023!"<<endl;

        return 0;

    }

    if(n==1){

        v.push_back(numPlace[0]);

    }

    else for(int i=0;i<n;i++) brute(numPlace,v,i,0,0);

    long long total=0;

    int m=1;

    while(total<INF){

        total=0;

        for(int i=0;i<n;i++){

            total+=pow(numPlace[i],m);

        }

        bool check=0;

        for(int i=0;i<v.size();i++) if(v[i]==total) check=1;

        if(check) res++;

        m++;

    }

    cout<<res<<endl;

    return 0;

}

int main(){

    FAST_IO;

    int t;

    cin>>t;

    for(int i=0;i<t;i++) solve();

    return 0;

}