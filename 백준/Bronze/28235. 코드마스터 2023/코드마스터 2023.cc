#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main() {
    FAST_IO;
    string s;
    cin>>s;
    if(s=="SONGDO") cout<<"HIGHSCHOOL";
    else if(s=="CODE") cout<<"MASTER";
    else if(s=="2023") cout<<"0611";
    else cout<<"CONTEST";
    return 0;
}