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

int t;

int make(){

    

    return 0;

}

int solve(){

    int h,n;

    cin>>h>>n;

    vector<vector<int>> apart;

    apart.resize(15);

    for(int i=0;i<15;i++) apart[i].resize(15);

    for(int i=1;i<15;i++){

        apart[0][i]=i;

        apart[i][1]=1;

    }

    if(n==1){

        cout<<apart[h][n]<<endl;

        return 0;

    }

    for(int i=1;i<=h;i++){

        for(int j=2;j<=n;j++){

            apart[i][j]=apart[i-1][j]+apart[i][j-1];

        }

    }

    cout<<apart[h][n]<<endl;

    return 0;

}

int main(){

    cin>>t;

    for(int i=0;i<t;i++) solve();

    return 0;

}