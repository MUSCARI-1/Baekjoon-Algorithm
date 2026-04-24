#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=1234567890;

int main(){
    FAST_IO;
    int n,cnt=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int k=v[i],p1=0,p2=n-1;
        bool c=0;
        while(p1<p2){
            if(p1==i){
                p1++;
                continue;
            }
            if(p2==i){
                p2--;
                continue;
            }
            int sum=v[p1]+v[p2];
            if(sum==k){
                c=1;
                break;
            }
            else if(sum>k) p2--;
            else p1++;
        }
        if(c) cnt++;
    }
    cout<<cnt;
    return 0;
}