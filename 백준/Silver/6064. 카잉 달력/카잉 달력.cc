#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF=987654321;

int euclidean(int a,int b){

    int r=a%b;

    if(r==0) return b;

    return euclidean(b,r);

}

int solve(){

    int m,n,x,y,kaingNum=INF,cnt=1;

    cin>>m>>n>>x>>y;

    int b=euclidean(m,n);

    kaingNum=m*n/b;

    int now=1;

    while(x!=1){

        x--;

        y--;

        if(y==0) y=n;

        cnt++;

    }

    if(now==y&&cnt<=kaingNum) return cnt;

    while(now!=y&&cnt<=kaingNum){

        now+=m;

        if(now>n&&now%n!=0) now%=n;

        else if(now%n==0) now=n;

        cnt+=m;

        if(now==y&&cnt<=kaingNum) return cnt;

    }

    return -1;

}

int main(){

    FAST_IO;

    int t;

    cin>>t;

    for(int i=0;i<t;i++) cout<<solve()<<endl;

    return 0;

}

