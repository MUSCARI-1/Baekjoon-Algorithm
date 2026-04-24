#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<bool> era(4000001,1);

vector<int> v;

void erato(){

    for(int i=2;i<=2000;i++){

        if(!era[i]) continue;

        int x=i+i;

        while(x<=4000000){

            era[x]=0;

            x+=i;

        }

    }

    for(int i=2;i<=4000000;i++) if(era[i]) v.push_back(i);

    return;

}

int main(){

    FAST_IO;

    erato();

    int k=v.size();

    int p1=0,p2=1,n,s=v[0],cnt=0;

    cin>>n;

    while(p2<k+1){

        if(s==n){

            cnt++;

            s-=v[p1];

            p1++;

        }

        else if(s<n){

            s+=v[p2];

            p2++;

        }

        else{

            s-=v[p1];

            p1++;

        }

    }

    cout<<cnt;

    return 0;

}