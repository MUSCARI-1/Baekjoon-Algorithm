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

int n;

int make(){

    

    return 0;

}

int solve(int x){

    int i=2;

    while(i>1){

        if(x%i==0){

            n=x/i;

            cout<<i<<endl;

            return 0;

        }

        i++;

    }

    return 0;

}

int main(){

    cin>>n;

    while(n!=1) solve(n);

    return 0;

}