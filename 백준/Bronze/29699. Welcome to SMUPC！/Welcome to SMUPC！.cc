#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    string str="WelcomeToSMUPC";
    int k;
    cin>>k;
    if(k%14==0) cout<<'C';
    else{
        k%=14;
        cout<<str[k-1];
    }
    return 0;
}