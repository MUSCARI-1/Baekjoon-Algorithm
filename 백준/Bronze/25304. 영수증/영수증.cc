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

int result=0;

int real=0;

int make(){

    

    return 0;

}

int solve(){

    int a,b,c;

    cin>>a>>b;

    c=a*b;

    real+=c;

    return 0;

}

int main(){

    int cnt;

    cin>>result>>cnt;

    for(int i=1;i<=cnt;i++) solve();

    if(real==result) cout<<"Yes";

    else cout<<"No";

    return 0;

}