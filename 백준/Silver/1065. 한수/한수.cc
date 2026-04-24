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

vector<bool> hansu(10001,1);

int total=0;

int num;

int make(){

    

    return 0;

}

float solve(int n){

    if(n<100) return 1;

    int n1,n2,n3;

    n1=n/100;

    n2=n%100/10;

    n3=n%10;

    if(n3-n2==n2-n1) return 1;

    else return 0;

}

int main(){

    cin>>num;

    for(int i=1;i<=num;i++){

        hansu[i]=solve(i);

        if(hansu[i]==1) total++;

    }

    cout<<total;

    return 0;

}