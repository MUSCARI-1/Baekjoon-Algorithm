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

bool esc=0;

queue<int> now;

queue<int> cnt;

vector<bool> check;

int make(){

    cin >> n;

    check.resize(n+1);

    for(int i=1;i<n+1;i++){

        check[i]=0;

    }

    cnt.push(0);

    now.push(n);

    return 0;

}

int solve(int a,int b){

    if(a==0){

        cout << b;

        esc=1;

        return 0;

    }

    int x=sqrt(a);

    for(int i=1;i<=x;i++){

        int z=a-i*i;

        if(check[z]==0){

            check[z]=1;

            now.push(z);

            cnt.push(b+1);

        }

    }

    return 0;

}

int main(){

    make();

    while(now.size()!=0){

        solve(now.front(),cnt.front());

        now.pop();

        cnt.pop();

        if(esc==1) return 0;

    }

    return 0;

}