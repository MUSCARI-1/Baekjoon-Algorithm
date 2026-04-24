#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

void solve() {
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        cnt += int(s[i] - '0');
    }
    if (cnt % 3 == 0) cout << 0 << " " << 3 << endl;
    else if (cnt % 3 == 1) {
        int idx = 0;
        bool flag = false;
        while (!flag && idx < s.size()) {
            if (s[idx] != '1') idx++;
            else flag = true;
        }
        if (!flag) cout << 0 << " " << 5 << endl;
        else cout << idx + 1 << " " << 3 << endl;
    }
    else {
        int idx = 0;
        bool flag = false;
        while (!flag && idx < s.size()) {
            if (s[idx] != '5') idx++;
            else flag = true;
        }
        if (!flag) {
            if (s.size() % 2 == 0) cout << 0 << " " << 11 << endl;
            else cout << 1 << " " << 11 << endl;
        }
        else cout << idx + 1 << " " << 3 << endl;
    }
}

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}