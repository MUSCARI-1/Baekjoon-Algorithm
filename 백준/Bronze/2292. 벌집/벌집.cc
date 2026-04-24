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

#include<iomanip>

using namespace std;

int a;

int cnt=1;

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    cin>>a;

    int n=1;

    int x=1;

    while(n<a){

        cnt++;

        n+=6*x;

        x++;

    }

    cout<<cnt;

    return 0;

}