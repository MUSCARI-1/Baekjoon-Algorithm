#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    FAST_IO;
    int n;
    cin>>n;
    queue<vector<int>> qv;
    vector<int> v={n};
    vector<bool> c(1000001,0);
    c[n]=1;
    qv.push(v);
    while(qv.size()!=0){
        vector<int> nowPath=qv.front();
        qv.pop();
        int s=nowPath.size()-1;
        int k=nowPath[s];
        if(k==1){
            cout<<s<<endl;
            for(int i=0;i<=s;i++) cout<<nowPath[i]<<" ";
            return 0;
        }
        if(k%3==0&&!c[k/3]){
            nowPath.push_back(k/3);
            qv.push(nowPath);
            nowPath.pop_back();
            c[k/3]=1;
        }
        if(k%2==0&&!c[k/2]){
            nowPath.push_back(k/2);
            qv.push(nowPath);
            nowPath.pop_back();
            c[k/2]=1;
        }
        if(!c[k-1]){
            nowPath.push_back(k-1);
            qv.push(nowPath);
            c[k-1]=1;
        }
    }
    return 0;
}