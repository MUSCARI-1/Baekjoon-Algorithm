#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<bool> dp(s.size() + 1, false);
    dp[0] = true;
    for (int i = 0; i < s.size(); i++) {
        if (!dp[i]) continue;
        for (int j = 0; j < n; j++) {
            if (i + a[j].size() > s.size()) continue;
            bool flag = true;
            for (int k = 0; k < a[j].size(); k++) {
                if (s[i + k] != a[j][k]) flag = false;
            }
            if (flag) dp[i + a[j].size()] = true;
        }
    }
    cout << dp[s.size()];
    return 0;
}