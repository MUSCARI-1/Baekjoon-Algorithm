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
        num[i].resize(10,0);
        if(i==0){
            for(int j=0;j<10;j++){
                if(j==0) num[i][j]=0;
                else num[i][j]=1;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<10;j++){
            if(j==0) num[i][j]+=num[i-1][j+1];
            else if(j==9) num[i][j]+=num[i-1][j-1];
            else num[i][j]+=num[i-1][j+1]+num[i-1][j-1];
            if(num[i][j]>=1000000000) num[i][j]%=1000000000;
        }
    }
    long long res=0;
    for(int i=0;i<10;i++) res+=num[n-1][i];
    res%=1000000000;
    cout<<res;
    return 0;
}