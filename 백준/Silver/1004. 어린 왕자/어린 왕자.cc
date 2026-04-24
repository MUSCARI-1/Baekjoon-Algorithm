#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int cnt=0;

int result(){

    int x,y,x2,y2,n;

    cnt=0;

    cin>>x>>y>>x2>>y2>>n;

    for(int i=0;i<n;i++){

        int p1,p2,r;

        cin>>p1>>p2>>r;

        int px=abs(p1-x);

        int py=abs(p2-y);

        int px2=abs(p1-x2);

        int py2=abs(p2-y2);

        double dis1=hypot(px,py);

        double dis2=hypot(px2,py2);

        if((dis1>r&&dis2<r)||(dis1<r&&dis2>r)) cnt++;

    }

    return cnt;

}

int main(){

    FAST_IO;

    int t;

    cin>>t;

    for(int i=0;i<t;i++) cout<<result()<<endl;

    return 0;

}