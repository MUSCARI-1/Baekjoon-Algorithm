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

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    int hour,min,timer;

    int timer_h=0;

    cin>>hour>>min>>timer;

    if(timer>=60){

        timer_h=timer/60;

        timer=timer%60;

    }

    hour+=timer_h;

    min+=timer;

    if(min>=60){

        hour+=min/60;

        min=min%60;

    }

    if(hour>=24) hour=hour%24;

    cout<<hour<<" "<<min;

    return 0;

}