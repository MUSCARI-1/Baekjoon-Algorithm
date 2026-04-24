#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int D(int x){

    int nx=(x*2)%10000;

    return nx;

}

int S(int x){

    int nx=x-1;

    if(nx==-1) nx=9999;

    return nx;

}

int L(int x){

    int x1=x/1000;

    int nx=((x*10)%10000)+x1;

    return nx;

}

int R(int x){

    int x4=x%10;

    int nx=x/10+x4*1000;

    return nx;

}

string solve(){

    int a,b;

    cin>>a>>b;

    vector<bool> c(10000,0);

    queue<pair<int,string>> q;

    q.push({a,""});

    while(q.size()!=0){

        int now=q.front().first;

        string s=q.front().second;

        q.pop();

        if(now==b) return s;

        int n1=D(now);

        int n2=S(now);

        int n3=L(now);

        int n4=R(now);

        if(!c[n1]){

            c[n1]=1;

            q.push({n1,s+'D'});

        }

        if(!c[n2]){

            c[n2]=1;

            q.push({n2,s+'S'});

        }

        if(!c[n3]){

            c[n3]=1;

            q.push({n3,s+'L'});

        }

        if(!c[n4]){

            c[n4]=1;

            q.push({n4,s+'R'});

        }

    }

}

int main(){

    FAST_IO;

    int n;

    cin>>n;

    for(int i=0;i<n;i++) cout<<solve()<<"\n";

    return 0;

}