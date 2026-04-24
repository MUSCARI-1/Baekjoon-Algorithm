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

long long n;

long long cnt=1;

int make(){

    cin >> n;

    return 0;

}

int solve(int n){

    if(n=1) return 1;

    return n*solve(n-1);

}

int main(){

    make();

    for(;n>1;n--){

        cnt=cnt*n;

    }

    cout<<cnt;

    return 0;

}