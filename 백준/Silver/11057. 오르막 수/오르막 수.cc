#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> cnt(1001);

int main(){
    FAST_IO;
    int n;
    cin>>n;
    for(int i=1;i<=1000;i++){
        cnt[i].resize(10,-1);
    }
    for(int i=0;i<10;i++) cnt[1][i]=1;
    for(int i=2;i<=1000;i++){
        for(int j=0;j<10;j++){
            int k=0;
            for(int l=0;l<=j;l++){
                k+=cnt[i-1][l];
            }
            k%=10007;
            cnt[i][j]=k;
        }
    }
    int res=0;
    for(int i=0;i<10;i++) res+=cnt[n][i];
    cout<<res%10007;
    return 0;
}