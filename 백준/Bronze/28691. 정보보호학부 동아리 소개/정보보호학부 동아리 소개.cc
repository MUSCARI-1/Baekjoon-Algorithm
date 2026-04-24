#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main() {
    FAST_IO;
    char a;
    cin>>a;
    if(a=='M') cout<<"MatKor";
    else if(a=='W') cout<<"WiCys";
    else if(a=='C') cout<<"CyKor";
    else if(a=='A') cout<<"AlKor";
    else cout<<"$clear";
    return 0;
}