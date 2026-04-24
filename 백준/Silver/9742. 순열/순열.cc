#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 2000000001;

int cnt, n;
string s;
stack<char> now;
vector<bool> check(10, false);
bool flag = false;

void solve() {
    if (flag) return;
    else if (now.size() == s.size()) {
        if (cnt == n) {
            cout << s << " " << n << " = ";
            vector<char> res(n);
            for (int i = s.size() - 1; i >= 0; i--) {
                res[i] = now.top();
                now.pop();
            }
            for (int i = 0; i < s.size(); i++) cout << res[i];
            flag = true;
            cout << endl;
            return;
        }
        else {
            cnt++;
            return;
        }
    }
    else {
        for (int i = 0; i < s.size(); i++) {
            if (check[i]) continue;
            check[i] = true;
            now.push(s[i]);
            solve();
            if (flag) return;
            now.pop();
            check[i] = false;
        }
    }
}

int main() {
    FAST_IO;
    while (cin >> s) {
        cin >> n;
        flag = false;
        for (int i = 0; i < 10; i++) check[i] = false;
        cnt = 1;
        solve();
        if (!flag) cout << s << " " << n << " = No permutation" << endl;
    }
    return 0;
}