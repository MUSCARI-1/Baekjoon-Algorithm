#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int n;
    double cnt=0;
    cin>>n;
    cout<<fixed;
    cout.precision(6);
    vector<pair<int,int>> point;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        point.push_back({a,b});
    }
    point.push_back({point[0].first,point[0].second});
    for(int i=0;i<=n;i++){
        double x1=point[i].first,x2=point[i+1].first,y1=point[i].second,y2=point[i+1].second;
        cnt+=x1*y2-x2*y1;
    }
    cnt=abs(cnt)/2;
    cout.precision(1);
    cout<<cnt;
    return 0;
}