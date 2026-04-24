#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int main() {
    FAST_IO;
    int n;
    cin>>n;
    int k=n*2-1;
    for (int i=0;i<n;i++) {
        for (int j=0;j<i;j++) cout<<" ";
        for (int j=0;j<k;j++) cout<<"*";
        cout<<endl;
        k-=2;
    }
    return 0;
}