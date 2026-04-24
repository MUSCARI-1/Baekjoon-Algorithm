#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int main() {
    FAST_IO;
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        for (int j=0;j<i;j++) cout<<"*";
        for (int j=i;j<n;j++) cout<<"  ";
        for (int j=0;j<i;j++) cout<<"*";
        cout<<endl;
    }
    for (int i=n-1;i>0;i--) {
        for (int j=0;j<i;j++) cout<<"*";
        for (int j=i;j<n;j++) cout<<"  ";
        for (int j=0;j<i;j++) cout<<"*";
        if (i==1) break;
        cout<<endl;
    }
    return 0;
}