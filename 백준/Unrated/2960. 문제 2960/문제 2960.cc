#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,k;

    int cnt=0;

    int now=0;

    cin>>n>>k;

    vector<bool> check(1005,1);

    while(cnt!=k){

        for(int i=2;i<=n;i++){

            if(!check[i]) continue;

            else{

                for(int j=i;j<=n;){

                    if(!check[j]){

                        j+=i;

                        continue;

                    }

                    check[j]=0;

                    cnt++;

                    now=j;

                    if(cnt==k){

                        cout<<now;

                        return 0;

                    }

                    j+=i;

                }

            }

        }

    }

    cout<<now;

    return 0;

}