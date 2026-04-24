#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<pair<int,int>> mass;

vector<int> rank1;

int main(){

    FAST_IO;

    int n,size1,size2;

    cin>>n;

    rank1.resize(n);

    for(int i=0;i<n;i++){

        cin>>size1>>size2;

        mass.push_back({size1,size2});

    }

    for(int i=0;i<n;i++){

        int cnt=1;

        for(int j=0;j<n;j++){

            if(mass[i].first<mass[j].first&&mass[i].second<mass[j].second) cnt++;

        }

        rank1[i]=cnt;

        cnt=1;

    }

    for(int i=0;i<n;i++) cout<<rank1[i]<<" ";

    return 0;

}