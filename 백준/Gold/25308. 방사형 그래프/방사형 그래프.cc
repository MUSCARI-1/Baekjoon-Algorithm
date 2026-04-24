#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int cnt=0;
int play=0;
vector<int> v(8);
vector<bool> c(8,0);
vector<int> arr;

void check(){
    play++;
    arr.push_back(arr[0]);
    arr.push_back(arr[1]);
    bool c=1;
    for(int i=1;i<=9;i++){
        double x1=sqrt(pow(arr[i],2)/2),x2=0,x3=arr[i+1],y1=x1,y2=arr[i-1],y3=0;
        double abx=x2-x1,aby=y2-y1,acx=x3-x1,acy=y3-y1;
        double z=abx*acy-aby*acx;
        if(z<0) c=0;
    }
    arr.pop_back();
    arr.pop_back();
    if(c) cnt++;
    return;
}

void select(int depth){
    if(depth==8){
        check();
        return;
    }
    for(int i=0;i<8;i++){
        if(c[i]) continue;
        c[i]=1;
        arr.push_back(v[i]);
        select(depth+1);
        arr.pop_back();
        c[i]=0;
    }
    return;
}

int main(){
    FAST_IO;
    cout<<fixed;
    cout.precision(6);
    for(int i=0;i<8;i++) cin>>v[i];
    select(0);
    cout<<cnt;
    return 0;
}