#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<set>

#include<map>

#include<cmath>

#include<string>

#include<iomanip>

using namespace std;

int t,n;

int make(){

    

    return 0;

}

int solve(){

    if(n==4){

        cout<<"2 2"<<endl;

        return 0;

    }

    int a=n/2;

    int b=n/2;

    bool ac=0;

    bool bc=0;

    for(int i=2;i<a;i++){

        if(a%i==0){

            ac=1;

            break;

        }

    }

    if(ac==0){

        cout<<a<<' '<<a<<endl;

        return 0;

    }

    ac=0;

    bc=0;

    while(ac==0||bc==0){

        ac=1;

        bc=1;

        a--;

        b++;

        for(int i=2;i<a;i++){

            if(a%i==0){

                ac=0;

                break;

            }

        }

        for(int i=2;i<b;i++){

            if(b%i==0){

                bc=0;

                break;

            }

        }

    }

    cout<<a<<' '<<b<<endl;

    return 0;

}

int main(){

    cin>>t;

    for(int i=0;i<t;i++){

        cin>>n;

        solve();

    }

    return 0;

}