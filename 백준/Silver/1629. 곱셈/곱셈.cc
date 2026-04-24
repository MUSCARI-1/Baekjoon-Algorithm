#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

long long dc(int x,int y,int z){

    if(y%2==0){

        long long i=dc(x,y/2,z);

        return i*i%z;

    }

    else if(y==1){

        return x%z;

    }

    else{

        long long i=dc(x,y-1,z);

        return x*i%z;

    }

}

int main(){

    FAST_IO;

    int a,b,c;

    cin>>a>>b>>c;

    long long res=dc(a,b,c);

    cout<<res%c;

    return 0;

}