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
    vector<int> num(7,0);
    int dice;
    int price=0;
    for(int i=0;i<3;i++){
        cin>>dice;
        num[dice]++;
    }
    for(int i=1;i<7;i++){
        if(num[i]==3){
            price=i*1000+10000;
            cout<<price;
            return 0;
        }
        else if(num[i]==2){
            price=i*100+1000;
            cout<<price;
            return 0;
        }
    }
    for(int i=6;i>0;i--){
        if(num[i]==1){
            price=i*100;
            cout<<price;
            return 0;
        }
    }
    return 0;
}