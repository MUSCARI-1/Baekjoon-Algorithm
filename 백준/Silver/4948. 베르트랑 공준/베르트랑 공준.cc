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

int n;

int make(){

    

    return 0;

}

int solve(int x){

    vector<int> num;

    for(int i=x+1;i<=2*x;i++){

        if(i==2){

            num.push_back(i);

            continue;

        }

        bool check=0;

        int r=sqrt(i);

        for(int j=2;j<=r;j++){

            if(i%j==0){

                check=1;

                break;

            }

        }

        if(check==0) num.push_back(i);

    }

    cout<<num.size()<<endl;

    return 0;

}

int main(){

    bool i=1;

    while(i!=0){

        cin>>n;

        if(n==0) return 0;

        solve(n);

    }

    return 0;

}