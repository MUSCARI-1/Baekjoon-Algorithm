#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<set>

#include<cmath>

#include<string>

using namespace std;

int n,a;

vector<long long> sigma(100);

int make(){

    cin >> n;

    return 0;

}

int solve(int num){

    

    return 0;

}

int main(){

    make();

    for(int i=0;i<3;i++) sigma[i]=1;

    for(int i=3;i<5;i++) sigma[i]=2;

    for(int i=5;i<100;i++) sigma[i]=sigma[i-5]+sigma[i-1];

    for(int i=0;i<n;i++){

    cin >> a;

    cout << sigma[a-1] << endl;

    }

    return 0;

}