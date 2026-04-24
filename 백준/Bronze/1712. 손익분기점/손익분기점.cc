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

int a,b,c,plusz;

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    cin>>a>>b>>c;

    plusz=c-b;

    if(plusz<=0){

        cout<<"-1";

        return 0;

    }

    int num=a/plusz+1;

    cout<<num;

    return 0;

}