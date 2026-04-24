#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF=987654321;

int main(){

    FAST_IO;

    int n,m,x,xx=INF,y,yy=INF;

    cin>>n>>m;

    for(int i=1;i<n;i++){

        int a;

        cin>>a;

        if(xx>a){

            x=i;

            xx=a;

        }

    }

    int corner;

    cin>>corner;

    if(xx>corner){

        x=n;

        xx=corner;

    }

    y=1;

    yy=corner;

    for(int i=2;i<=m;i++){

        int a;

        cin>>a;

        if(yy>a){

            y=i;

            yy=a;

        }

    }

    cout<<x<<' '<<y;

    return 0;

}