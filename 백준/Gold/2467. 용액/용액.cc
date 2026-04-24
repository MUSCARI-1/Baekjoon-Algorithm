#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=1000000001;

int main(){
    FAST_IO;
    int n,res1=INF,res2=INF;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int p1=0;
    int p2=n-1;
    while(p1!=p2){
        int now1=v[p1],now2=v[p2];
        int merge=now1+now2;
        if(merge==0){
            cout<<now1<<' '<<now2;
            return 0;
        }
        if(merge>0){
            if(merge<abs(res1+res2)){
                res1=now1;
                res2=now2;
            }
            p2--;
        }
        else{
            if(abs(merge)<abs(res1+res2)){
                res1=now1;
                res2=now2;
            }
            p1++;
        }
    }
    cout<<res1<<' '<<res2;
    return 0;
}
