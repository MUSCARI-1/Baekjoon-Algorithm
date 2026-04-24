#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> weight;

vector<bool> c;

vector<int> selectNum;

int n,cnt=0,res=0;

int combination(vector<bool> &minusNumCheck,int x,int minusNum,int idx){

    int minus=0,sum=0;

    for(int i=0;i<x;i++){

        if(minusNumCheck[i]){

            minus++;

            sum-=selectNum[i];

        }

        else sum+=selectNum[i];

    }

    if(minus==minusNum){

        if(sum>0) c[sum]=1;

        return 0;

    }

    for(int i=idx;i<x;i++){

        minusNumCheck[i]=1;

        combination(minusNumCheck,x,minusNum,i+1);

        minusNumCheck[i]=0;

    }

    return 0;

}

int select(int x,int idx){

    if(x==selectNum.size()){

        vector<bool> minusNumCheck(x,0);

        for(int i=0;i<=x;i++) combination(minusNumCheck,x,i,0);

        return 0;

    }

    for(int i=idx;i<n;i++){

        selectNum.push_back(weight[i]);

        select(x,i+1);

        selectNum.pop_back();

    }

    return 0;

}

int main(){

    FAST_IO;

    cin>>n;

    weight.resize(n);

    for(int i=0;i<n;i++){

        cin>>weight[i];

        cnt+=weight[i];

    }

    c.resize(cnt+1,0);

    for(int i=1;i<=n;i++) select(i,0);

    for(int i=1;i<=cnt;i++) if(!c[i]) res++;

    cout<<res;

    return 0;

}