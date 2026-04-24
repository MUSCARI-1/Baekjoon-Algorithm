#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int t,num1,num2,bigger;

    cin>>t;

    for(int i=0;i<t;i++){

        cin>>num1>>num2;

        bigger=max(num1,num2);

        int result=bigger;

        while(0==0){

            if(result%num1==0&&result%num2==0){

                cout<<result<<endl;

                break;

            }

            else result+=bigger;

        }

    }

    return 0;

}