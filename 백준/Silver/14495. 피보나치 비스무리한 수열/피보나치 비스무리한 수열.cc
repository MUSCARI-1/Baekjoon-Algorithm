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

vector<long long> fi(1000,1);

int make(){

    

    return 0;

}

long long fibo(int i){

    for(int j=4;j<i+1;j++){

        fi[j]=fi[j-1]+fi[j-3];

    }

    return fi[i];

}

int main(){

    cin>>n;

    cout<<fibo(n);

    return 0;

}