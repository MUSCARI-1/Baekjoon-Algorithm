#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
    FAST_IO;
    while(1){
        int n,m,cnt=0;
        cin>>n>>m;
        if(cin.eof()) break;
        for(int i=n;i<=m;i++){
            vector<int> check(10,0);
            int k=i;
            bool c=0;
            while(k!=0){
                if(check[k%10]==1) c=1;
                check[k%10]=1;
                k/=10;
            }
            if(!c) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}