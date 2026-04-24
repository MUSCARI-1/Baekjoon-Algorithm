#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> v;

int n;

int infi=123456789;

void sol(vector<vector<int>> house,int x){

    house[n-1][x]=infi;

    for(int i=1;i<3;i++){

        int k=x+i;

        if(k>=3) k-=3;

        house[0][k]=infi;

    }

    for(int i=1;i<n;i++){

        house[i][0]+=min(house[i-1][1],house[i-1][2]);

        house[i][1]+=min(house[i-1][2],house[i-1][0]);

        house[i][2]+=min(house[i-1][0],house[i-1][1]);

    }

    int low=min({house[n-1][0],house[n-1][1],house[n-1][2]});

    v.push_back(low);

}

int main(){

    FAST_IO;

    cin>>n;

    vector<vector<int>> house;

    house.resize(n);

    for(int i=0;i<n;i++){

        house[i].resize(3);

        for(int j=0;j<3;j++){

            cin>>house[i][j];

        }

    }

    for(int i=0;i<3;i++) sol(house,i);

    cout<<min({v[0],v[1],v[2]});

    return 0;

}