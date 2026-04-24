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

using namespace std;

int n;

vector<long long> fi(1000005,1);

int make(){

    

    return 0;

}

int fibo(int i){

    fi[0]=0;

    for(int j=2;j<i+1;j++){

        fi[j]=fi[j-1]+fi[j-2];

        if(fi[j]>=1000000007) fi[j]=fi[j]%1000000007;

    }

    return fi[i];

}

int main(){

    cin>>n;

    cout<<fibo(n);

    return 0;

}