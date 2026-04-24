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

float average=0;

int num;

float solve();

int make(){

    

    return 0;

}

float solve(){

    vector<float> grade(num);

    for(int i=0;i<num;i++){

        cin>>grade[i];

    }

    for(int i=0;i<num;i++){

        average+=grade[i];

    }

    //cout<<average<<endl;

    average=average/num;

    int cnt=0;

    for(int i=0;i<num;i++){

        if(grade[i]>average) cnt++;

    }

    float cnt1=cnt;

    float num1=num;

    float upper=(cnt1*100)/num1;

    //cout<<average<<endl;

    cout<<fixed<<setprecision(3)<<upper<<'%'<<endl;

    average=0;

    return 0;

}

int main(){

    int test;

    cin>>test;

    for(int i=0;i<test;i++){

        cin>>num;

        solve();

    }

    return 0;

}