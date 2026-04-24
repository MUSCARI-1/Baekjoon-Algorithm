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

int n,max1,max2;

vector<int> max_;

vector<int> st;

int make(){

    cin >> n;

    st.resize(n+1);

    max_.resize(n+1);

    for(int i=1;i<=n;i++){

        cin >> st[i];

    }

    max_[1]=st[1];

    max_[2]=st[1]+st[2];

    max_[0]=0;

    st[0]=0;

    return 0;

}

int solve(int x){

    int now=3;

    while(now<=x){

        max1=max_[now-3]+st[now-1]+st[now];

        max2=max_[now-2]+st[now];

        if(max1>max2) max_[now]=max1;

        else max_[now]=max2;

        now++;

    }

    cout<<max_[x];

    return 0;

}

int main(){

    make();

    solve(n);

    return 0;

}