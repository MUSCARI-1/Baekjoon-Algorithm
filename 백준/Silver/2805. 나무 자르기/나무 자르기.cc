#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> v;

int n,m;

bool check(int mid){

    long long cnt=0;

    for(int i=0;i<n;i++){

        int dis=v[i]-mid;

        if(dis<=0) continue;

        else cnt+=dis;

    }

    if(cnt>=m) return true;

    else return false;

}

int solve(){

    int left=0;

    int right=v[n-1];

    int res=0;

    while(left<=right){

        int mid=(left+right)/2;

        if(check(mid)){

            left=mid+1;

            res=max(res,mid);

        }

        else right=mid-1;

    }

    return res;

}

int main(){

    FAST_IO;

    cin>>n>>m;

    v.resize(n);

    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    cout<<solve();

    return 0;

}