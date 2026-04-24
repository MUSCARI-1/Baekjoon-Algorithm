#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    int n,m;
    cin>>n>>m;
    int p1=0,p2=n-1,cnt=0;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    while(p1<p2){
        if(v[p1]+v[p2]>=m){
            cnt++;
            p1++;
            p2--;
        }
        else p1++;
    }
    cout<<cnt<<endl;
    return 0;
}