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

int cnt=0;

int clone1;

int make(){

    

    return 0;

}

int solve(int n){

    int a1,a2,a3,a4,re;

    if(n<10){

        clone1=n*11;

        return 0;

    }

    else{

        a1=n/10;

        a2=n%10;

        re=a1+a2;

        if(re<10){

            clone1=a2*10+re;

            return 0;

        }

        else{

            a4=re%10;

            clone1=a2*10+a4;

        }

    }

    return 0;

}

int main(){

    int n;

    cin>>n;

    clone1=n;

    if(n==0){

        cout<<'1';

        return 0;

    }

    solve(clone1);

    cnt++;

    while(clone1!=n){

        solve(clone1);

        cnt++;

    }

    cout<<cnt;

    return 0;

}