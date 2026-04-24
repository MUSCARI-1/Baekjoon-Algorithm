#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO;
    int n;
    int cnt=0;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cnt++;
        int x;
        cin>>i;
        sum+=i;
    }
    cout<<cnt<<endl<<sum;
}