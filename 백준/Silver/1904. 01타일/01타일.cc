#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
    FAST_IO;
    int n;
    cin>>n;
    vector<int> num(1000001,0);
    num[n]=1;
    for(int i=n;i>=3;i--){
        if(num[i]!=0){
            num[i-2]=(num[i-2]+num[i])%15746;
            num[i-1]=(num[i-1]+num[i])%15746;
        }
    }
    int result=(num[1]+num[2]*2)%15746;
    cout<<result;
    return 0;
}