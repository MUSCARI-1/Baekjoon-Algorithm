#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
    FAST_IO;
    int n;
    int high=-1234567890;
    cin>>n;
    vector<int> num(100001,0);
    for(int i=0;i<n;i++) cin>>num[i];
    int now=0;
    for(int i=0;i<n;i++){
        now+=num[i];
        high=max(now,high);
        if(now<0) now=0;
    }
    cout<<high;
    return 0;
}