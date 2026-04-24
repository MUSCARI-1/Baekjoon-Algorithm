#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO;
    int n;
    long long near=98765432100;
    cin>>n;
    vector<long long> v(n),res(3);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int p1=0;p1<n-2;p1++){
        int p2=p1+1;
        int p3=n-1;
        while(p2<p3){
            long long mix=v[p1]+v[p2]+v[p3];
            if(abs(near)>abs(mix)){
                near=mix;
                res[0]=v[p1];
                res[1]=v[p2];
                res[2]=v[p3];
            }
            if(mix>0) p3--;
            else p2++;
        }
    }
    sort(res.begin(),res.end());
    for(int i=0;i<3;i++) cout<<res[i]<<' ';
    return 0;
}