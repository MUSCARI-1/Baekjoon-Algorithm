#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int k,result;

    vector<pair<int,int>> line;

    cin>>k;

    int high=0;

    for(int i=0;i<6;i++){

        int a,b;

        cin>>a>>b;

        line.push_back({a,b});

    }

    for(int i=0;i<6;i++){

        int bigger=line[i%6].second*line[(i+1)%6].second;

        if(high==0||bigger>high){

            high=bigger;

            int low=line[(i+3)%6].second*line[(i+4)%6].second;

            result=(bigger-low)*k;

        }

    }

    cout<<result;

    return 0;

}