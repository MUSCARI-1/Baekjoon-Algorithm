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

int a;

int cnt=1;

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    cin>>a;

    int x=1;

    int y=1;

    bool sign=1;

    while(cnt!=a){

        if(sign==1){

            if(x==1){

                y++;

                sign=0;

            }

            else{

                x--;

                y++;

            }

        }

        else{

            if(y==1){

                x++;

                sign=1;

            }

            else{

                x++;

                y--;

            }

        }

        cnt++;

    }

    cout<<x<<'/'<<y;

    return 0;

}