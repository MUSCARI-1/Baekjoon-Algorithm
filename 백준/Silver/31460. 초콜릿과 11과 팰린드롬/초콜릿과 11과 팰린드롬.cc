#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    int t;
    cin>>t;
    vector<int> num(2);
    num[0]=0;
    num[1]=1;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n==1) cout<<'0'<<endl;
        else if(n==2) cout<<"11"<<endl;
        else if(n==3) cout<<"121"<<endl;
        else{
            cout<<"11";
            for(int j=2;j<n-2;j++) cout<<'0';
            cout<<"11"<<endl;
        }
    }
    return 0;
}