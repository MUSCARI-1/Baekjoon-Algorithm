#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int main(){
    FAST_IO;
    while(true) {
        string s;
        getline(cin, s);
        if (s == "END") break;
        for (int i = s.size() - 1; i >= 0; i--) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}