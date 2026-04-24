#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    int n;
    cin>>n;
    vector<tuple<int,int,int>> locate;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        locate.push_back({x,y,i+1});
    }
    sort(locate.begin(),locate.end());
    for(int i=1;i<n;i++)
        cout<<get<2>(locate[i])<<' '<<get<2>(locate[i-1])<<endl;
    return 0;
}