#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main() {
    FAST_IO;
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++) cout<<'*';
        cout<<endl;
    }
    return 0;
}