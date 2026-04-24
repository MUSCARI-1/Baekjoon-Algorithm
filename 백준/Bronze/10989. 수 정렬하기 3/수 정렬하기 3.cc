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

int n,a;

vector<int> num(10001,0);

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);

    cin>>n;

    for(int i=0;i<n;i++){

        cin>>a;

        num[a]++;

    }

    for(int i=1;i<10001;i++){

        for(;num[i]>0;num[i]--){

            cout<<i<<"\n";

        }

    }

    return 0;

}