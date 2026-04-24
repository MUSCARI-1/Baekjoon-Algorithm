#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int main() {
    FAST_IO;
    int n;
    cin>>n;
    vector<int> v(5,0);
    for (int i = 0; i < n; i++) {
        int x,y;
        cin>>x>>y;
        if (x == 0 || y == 0) v[0]++;
        else if (x > 0 && y > 0) v[1]++;
        else if (x < 0 && y > 0) v[2]++;
        else if (x < 0 && y < 0) v[3]++;
        else v[4]++;
    }
    cout<<"Q1: "<<v[1]<<endl;
    cout<<"Q2: "<<v[2]<<endl;
    cout<<"Q3: "<<v[3]<<endl;
    cout<<"Q4: "<<v[4]<<endl;
    cout<<"AXIS: "<<v[0];
    return 0;
}