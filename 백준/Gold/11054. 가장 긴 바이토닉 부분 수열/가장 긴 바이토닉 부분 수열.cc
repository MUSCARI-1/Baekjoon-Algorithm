#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    int result=1;

    cin>>n;

    vector<int> num(n);

    vector<int> cnt1(n,1);

    vector<int> cnt2(n,1);

    for(int i=0;i<n;i++) cin>>num[i];

    for(int i=1;i<n;i++){

        for(int j=0;j<i;j++){

            if(num[i]>num[j]){

                cnt1[i]=max(cnt1[j]+1,cnt1[i]);

                result=max(result,cnt1[i]);

            }

        }

    }

    for(int i=1;i<n;i++){

        for(int j=0;j<i;j++){

            if(num[i]<num[j]){

                cnt2[i]=max({cnt1[j]+1,cnt2[j]+1,cnt2[i]});

                result=max(result,cnt2[i]);

            }

        }

    }

    cout<<result;

    return 0;

}