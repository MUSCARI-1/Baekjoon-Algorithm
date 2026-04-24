#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,time=0,k;

    int pm=1;

    cin>>n;

    for(int i=0;i<n;i++){

        string s;

        cin>>s>>k;

        if(pm==1) time++;

        else time--;

        if(time==0) time=12;

        else if(time==13) time=1;

        if(s=="HOURGLASS"){

            if(time==k){

                cout<<time<<" NO"<<endl;

                continue;

            }

            else{

                pm=(pm+1)%2;

                cout<<time<<" NO"<<endl;

                continue;

            }

        }

        else{

            if(time==k){

                cout<<time<<" YES"<<endl;

            }

            else{

                cout<<time<<" NO"<<endl;

            }

        }

    }

    return 0;

}