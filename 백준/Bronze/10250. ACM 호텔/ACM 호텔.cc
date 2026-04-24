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

#include<iomanip>

using namespace std;

int h,w,n,t;

int make(){

    

    return 0;

}

int solve(){

    cin>>h>>w>>n;

    if(n%h==0){

        int result=h*100+n/h;

        cout<<result<<endl;

    }

    else{

        int result=(n%h)*100+n/h+1;

        cout<<result<<endl;

    }

    return 0;

}

int main(){

    cin>>t;

    for(int i=0;i<t;i++) solve();

    return 0;

}