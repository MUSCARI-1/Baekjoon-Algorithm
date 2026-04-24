#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<int> lis(n,0);

    lis[0]=1;

    vector<int> num(n);

    int result=1;

    for(int i=0;i<n;i++) cin>>num[i];

    for(int i=1;i<n;i++){

        int high=1;

        for(int j=0;j<i;j++){

            if(num[i]>num[j]) high=max(lis[j]+1,high);

        }

        lis[i]=high;

        result=max(high,result);

    }

    cout<<result;

    return 0;

}