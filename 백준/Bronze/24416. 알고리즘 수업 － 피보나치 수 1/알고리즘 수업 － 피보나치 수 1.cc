#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
    FAST_IO;
    int n;
    cin>>n;
    int one=0;
    int two=0;
    vector<int> fi(41,0);
    fi[n]=1;
    for(int i=n;i>=3;i--){
        if(fi[i]!=0){
            fi[i-1]+=fi[i];
            fi[i-2]+=fi[i];
            two++;
        }
    }
    one=fi[1]+fi[2];
    cout<<one<<" "<<two;
    return 0;
}