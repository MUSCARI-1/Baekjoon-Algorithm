#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main() {
    FAST_IO;
    int a;
    cin>>a;
    if(a>=620) cout<<"Red";
    else if(a>=590) cout<<"Orange";
    else if(a>=570) cout<<"Yellow";
    else if(a>=495) cout<<"Green";
    else if(a>=450) cout<<"Blue";
    else if(a>=425) cout<<"Indigo";
    else cout<<"Violet";
    return 0;
}