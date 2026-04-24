#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO;
    long long m,n=0;
    cin>>m;
    if(m==1){
        cout<<"no"<<endl;
        return 0;
    }
    for(long long i=2;i<=sqrt(m);i++){
        if(m%i==0){
            cout<<"no"<<endl;
            return 0;
        }
    }
    int v[10]={0,1,2,-1,-1,5,9,-1,8,6};
    while(m>0){
        int k=m%10;
        if(v[k]==-1){
            cout<<"no"<<endl;
            return 0;
        }
        else n=n*10+v[k];
        m/=10;
    }
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    return 0;
}