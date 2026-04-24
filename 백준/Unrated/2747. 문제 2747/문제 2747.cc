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

    cin >> n;

    return 0;

}

int solve(int a){

    vector<int> fibo(a+1);

    fibo[0]=0;

    fibo[1]=1;

    for(int i=2;i<=a;i++) fibo[i]=fibo[i-1]+fibo[i-2];

    cout << fibo[a];

    return 0;

}

int main(){

    make();

    solve(n);

    return 0;

}