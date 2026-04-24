#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int x,y,x2,y2,r,r2,t;

int search(){

    cin>>x>>y>>r>>x2>>y2>>r2;

    if(x==x2&&y==y2&&r==r2) return -1;

    else{

        if(x==x2&&y==y2) return 0;

        int xm=abs(x2-x);

        int ym=abs(y2-y);

        double dis=hypot(xm,ym);

        if(dis==r+r2||dis==abs(r-r2)) return 1;

        else if(dis>r+r2||dis<abs(r-r2)) return 0;

        else return 2;

    }

}

int main(){

    FAST_IO;

    cin>>t;

    for(int i=0;i<t;i++) cout<<search()<<endl;

    return 0;

}