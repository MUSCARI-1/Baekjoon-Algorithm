#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,c;

int solve(vector<int> v){

    int left=1;

    int right=(v[n-1]-v[0])/(c-1);

    int res=0;

    while(left<=right){

        int mid=(left+right)/2;

        int cnt=1;

        int dis=0;

        for(int i=1;i<n;i++){

            dis+=v[i]-v[i-1];

            if(dis>=mid){

                cnt++;

                dis=0;

            }

        }

        if(cnt>=c){

            res=max(res,mid);

            left=mid+1;

        }

        else right=mid-1;

    }

    return res;

}

int main(){

    FAST_IO;

    cin>>n>>c;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    cout<<solve(v);

    return 0;

}