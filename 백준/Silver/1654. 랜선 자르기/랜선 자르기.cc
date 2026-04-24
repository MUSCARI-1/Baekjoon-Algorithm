#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int k,n;

    cin>>k>>n;

    int res=0;

    vector<int> v(k);

    for(int i=0;i<k;i++) cin>>v[i];

    sort(v.begin(),v.end());

    int gap=v[k-1];

    if(gap%2!=0) gap=gap/2+1;

    else gap/=2;

    int now=gap;

    while(gap!=1){

        bool i=0;

        int cnt=0;

        if(now<=0){

            now++;

            continue;

        }

        for(int i=0;i<k;i++){

            cnt+=v[i]/now;

        }

        if(gap%2!=0) gap=gap/2+1;

        else gap/=2;

        if(cnt>=n){

            res=max(res,now);

            now+=gap;

        }

        else{

            now-=gap;

        }

        if(gap<=1) break;

    }

    bool i=0;

    int cnt=0;

    for(int i=0;i<k;i++){

        cnt+=v[i]/now;

    }

    if(cnt>=n){

        res=max(res,now);

    }

    cout<<res;

    return 0;

}