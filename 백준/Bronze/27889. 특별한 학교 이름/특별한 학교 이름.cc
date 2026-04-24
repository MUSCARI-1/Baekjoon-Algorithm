#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main() {
    FAST_IO;
    string s;
    cin>>s;
    if(s=="NLCS") cout<<"North London Collegiate School";
    else if(s=="BHA") cout<<"Branksome Hall Asia";
    else if(s=="KIS") cout<<"Korea International School";
    else cout<<"St. Johnsbury Academy";
    return 0;
}