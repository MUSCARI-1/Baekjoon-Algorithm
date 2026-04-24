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

int make(){

    

    return 0;

}

int fibo(int i){

    if(i==0) return 0;

    else if(i==1 || i==2) return 1;

    return fibo(i-1)+fibo(i-2);

}

int main(){

    cin>>n;

    cout<<fibo(n);

    return 0;

}