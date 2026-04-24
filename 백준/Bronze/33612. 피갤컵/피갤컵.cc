#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main() {
    FAST_IO;
    int a;
    cin>>a;
    a--;
    int b=2024,c=8;
    c=c+a*7;
    while(c>12){
        b++;
        c-=12;
    }
    cout<<b<<' '<<c;
    return 0;
}