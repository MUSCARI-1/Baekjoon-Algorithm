#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    FAST_IO;
    int n;
    cin>>n;
    vector<int> v(n);
    vector<vector<int>> lis;
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> startV={v[0]};
    lis.push_back(startV);
    int maxLisNum=0;
    for(int i=1;i<n;i++){
        int nowNum=v[i];
        int highestLis=0;
        int highestLisNum=0;
        for(int j=0;j<i;j++){
            int nextLis=lis[j].size();
            int nextNum=v[j];
            if(highestLis<nextLis&&nowNum>nextNum){
                highestLisNum=j;
                highestLis=nextLis;
            }
        }
        if(highestLis==0){
            vector<int> nextV={v[i]};
            lis.push_back(nextV);
            continue;
        }
        vector<int> nextV=lis[highestLisNum];
        nextV.push_back(nowNum);
        if(lis[maxLisNum].size()<nextV.size()) maxLisNum=i;
        lis.push_back(nextV);
    }
    vector<int> result=lis[maxLisNum];
    cout<<result.size()<<endl;
    for(int i=0;i<result.size();i++) cout<<result[i]<<" ";
    return 0;
}