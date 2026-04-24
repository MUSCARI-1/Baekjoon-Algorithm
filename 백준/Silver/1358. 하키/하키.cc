#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int cnt=0;

int w,h,x1,yy1,p,x2,y2,r;

int check(){

    int x,y;

    cin>>x>>y;

    if(x>=x1&&x<=x2&&y>=yy1&&y<=y2) cnt++;

    else if(y>=yy1&&y<=y2&&x<x1){

        int n1=x1-x;

        int z=yy1+r;

        int n2=abs(z-y);

        if(hypot(n1,n2)<=r) cnt++;

    }

    else if(y>=yy1&&y<=y2&&x>x2){

        int n1=x-x2;

        int z=yy1+r;

        int n2=abs(z-y);

        if(hypot(n1,n2)<=r) cnt++;

    }

    return 0;

}

int main(){

    FAST_IO;

    cin>>w>>h>>x1>>yy1>>p;

    x2=x1+w;

    y2=yy1+h;

    r=h/2;

    for(int i=0;i<p;i++) check();

    cout<<cnt;

    return 0;

}