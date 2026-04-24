#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<int> num(n);

    vector<int> idx(n);

    vector<int> res(n);

    for(int i=0;i<n;i++) cin>>num[i];

    idx[n-1]=-1;

    res[n-1]=-1;

    for(int i=n-2;i>=0;i--){

        if(num[i+1]>num[i]){

            res[i]=num[i+1];

            idx[i]=i+1;

        }

        else if(idx[i+1]==-1){

            idx[i]=-1;

            res[i]=-1;

        }

        else{

            int p=idx[i+1];

            while(p!=-1&&num[p]<=num[i]){

                p=idx[p];

            }

            if(p==-1){

                idx[i]=-1;

                res[i]=-1;

            }

            else{

                idx[i]=p;

                res[i]=num[p];

            }

        }

    }

    for(int i=0;i<n;i++) cout<<res[i]<<" ";

    return 0;

}