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

int n,k;

vector<int> num;

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    cin>>n>>k;

    for(int i=0;i<n;i++){

        int z;

        cin>>z;

        num.push_back(z);

    }

    sort(num.begin(),num.end(),greater<>());

    cout<<num[k-1];

    return 0;

}