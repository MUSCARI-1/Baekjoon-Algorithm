#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    while(1){
        long long n,cnt=1,num=1;
        cin>>n;
        if(cin.eof()==1) break;
        while(1){
            if(num%n==0){
                cout<<cnt<<endl;
                break;
            }
            else{
                cnt+=1;
                num=(num*10+1)%n;
            }
        }
    }
    return 0;
}