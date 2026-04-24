#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int cnt=0;

int hanoi(int x,int y){

    if(y%2==0) return hanoi(x-1,y/2);

    else{

        if(x%2==0){

            int k=(y+1)/2;

            if(k>3) k=k%3;

            if(k==1) cout<<"1 2"<<"\n";

            else if(k==2) cout<<"2 3"<<"\n";

            else cout<<"3 1"<<"\n";

            return 0;

        }

        else{

            int k=(y+1)/2;

            if(k>3) k=k%3;

            if(k==1) cout<<"1 3"<<"\n";

            else if(k==2) cout<<"3 2"<<"\n";

            else cout<<"2 1"<<"\n";

            return 0;

        }

    }

}

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<int> num(21);

    num[1]=1;

    for(int i=1;i<=n;i++) num[i+1]=num[i]*2+1;

    cout<<num[n]<<"\n";

    for(int i=1;i<=num[n];i++){

        hanoi(n,i);

    }

    return 0;

}