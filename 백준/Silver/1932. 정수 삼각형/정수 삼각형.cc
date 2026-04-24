#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<vector<int>> num;

    num.resize(n);

    for(int i=0;i<n;i++){

    num[i].resize(i+1);

    for(int j=0;j<=i;j++) cin>>num[i][j];

    }

    for(int i=1;i<n;i++){

        for(int j=0;j<=i;j++){

            if(j==0) num[i][j]+=num[i-1][j];

            else if(j==i) num[i][j]+=num[i-1][j-1];

            else num[i][j]+=max(num[i-1][j-1],num[i-1][j]);

        }

    }

    sort(num[n-1].begin(),num[n-1].end(),greater<>());

    cout<<num[n-1][0];

    return 0;

}