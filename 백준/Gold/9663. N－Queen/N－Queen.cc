#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n;
int cnt=0;
vector<int> chess;

void check(int depth){
    if(depth==n){
        cnt++;
        return;
    }
    else{
        for(int i=0;i<n;i++){
            bool TF=0;
            for(int j=0;j<depth;j++){
                if(chess[j]==i){
                    TF=1;
                    break;
                }
                if(abs(i-chess[j])==depth-j){
                    TF=1;
                    break;
                }
            }
            if(TF==1) continue;
            chess.push_back(i);
            check(depth+1);
            chess.pop_back();
        }
    }
}

int main(){
    FAST_IO;
    cin>>n;
    check(0);
    cout<<cnt;
    return 0;
}