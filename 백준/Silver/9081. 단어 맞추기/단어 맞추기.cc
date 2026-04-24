#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

string solve() {
    string s;
    cin >> s;
    for (int i = s.length() - 1; i >= 1; i--) {
        if (s[i-1] < s[i]) {
            char check = s[i];
            int ptr = i;
            for (int j = i+1; j < s.length(); j++) {
                if (s[j] > s[i-1] && s[j] < check) {
                    ptr = j;
                    check = s[j];
                }
            }
            swap(s[ptr], s[i-1]);
            sort(s.begin()+i, s.end());
            break;
        }
    }
    return s;
}

int main(){
    FAST_IO;
    int t;
    cin >> t;
    while(t--) cout << solve() << endl;
    return 0;
}