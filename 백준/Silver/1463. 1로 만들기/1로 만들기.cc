#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<set>

#include<map>

#include<cmath>

#include<string>

using namespace std;

int n;

vector<int> mini;

int make(){

    cin >> n;

    return 0;

}

int solve(){

    mini.resize(n+1);

    mini[1]=0;

    mini[2]=1;

    mini[3]=1;

    for(int i=4;i<=n;i++){

        int c1,c2,c3;

        if(i%6==0){

            c1=1+mini[i-1];

            c2=1+mini[i/2];

            c3=1+mini[i/3];

            mini[i]=min(min(c1,c2),c3);

        }

        else if(i%3==0){

            c1=1+mini[i-1];

            c2=1+mini[i/3];

            mini[i]=min(c1,c2);

        }

        else if(i%2==0){

            c1=1+mini[i-1];

            c2=1+mini[i/2];

            mini[i]=min(c1,c2);

        }

        else{

            mini[i]=1+mini[i-1];

        }

    }

    cout << mini[n];

    return 0;

}

int main(){

    make();

    solve();

    

    return 0;

}