#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int main() {
    FAST_IO;
    int n;
    cin>>n;
    if(n==1) {
        cout<<"*"<<endl;
        return 0;
    }
    for (int i=0;i<n-1;i++) cout<<" ";
    cout<<"*"<<endl;
    int k = 1;
    for (int i=2;i<n;i++) {
        for (int j=n-i;j>0;j--) cout<<" ";
        cout<<"*";
        for (int j=0;j<k;j++) cout<<" ";
        cout<<"*"<<endl;
        k+=2;
    }
    k+=2;
    for (int i=0;i<k;i++) cout<<"*";
    return 0;
}
