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

vector<bool> self(10001,1);

int make(){

    

    return 0;

}

float solve(){

    

    return 0;

}

int main(){

    for(int i=1;i<10001;i++){

        if(self[i]==true) cout<<i<<endl;

        if(i<10) self[i*2]=false;

        else if(i<100){

            int sum=i+i/10+i%10;

            self[sum]=false;

        }

        else if(i<1000){

            int sum=i+i/100+((i%100)/10)+i%10;

            self[sum]=false;

        }

        else{

            int sum=i+i/1000+((i%1000)/100)+((i%100)/10)+i%10;

            self[sum]=false;

        }

    }

    return 0;

}