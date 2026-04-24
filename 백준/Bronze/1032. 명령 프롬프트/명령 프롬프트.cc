#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int main() {
    FAST_IO;
    int n;
    cin>>n;
    vector<string> s(n+1);
    for (int i = 0; i < n; i++) {
        string str;
        cin>>str;
        s[i] = str;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < s[0].size(); j++) {
            if (s[0][j] != s[i][j]) s[0][j] = '?';
        }
    }
    cout<<s[0]<<endl;
    return 0;
}