#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int a,b;

    while(0==0){

        cin>>a>>b;

        if(a==0&&b==0) return 0;

        if(a%b==0) cout<<"multiple"<<endl;

        else if(b%a==0) cout<<"factor"<<endl;

        else cout<<"neither"<<endl;

    }

    return 0;

}