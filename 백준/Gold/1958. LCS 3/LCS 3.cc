#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;
long long INFINF = 10000000000000007;

int main() {
    FAST_IO
    string a, b, c;
    cin >> a >> b >> c;
    vector<vector<vector<int>>> dp(a.size());
    for (int i = 0; i < a.size(); i++) {
        dp[i].resize(b.size());
        for (int j = 0; j < b.size(); j++) {
            dp[i][j].resize(c.size(), 0);
        }
    }
    int res = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            for (int k = 0; k < c.size(); k++) {
                if (a[i] != b[j] || b[j] != c[k]) {
                    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
                    cnt1 = (i == 0) ? 0 : dp[i-1][j][k];
                    cnt2 = (j == 0) ? 0 : dp[i][j-1][k];
                    cnt3 = (k == 0) ? 0 : dp[i][j][k-1];
                    dp[i][j][k] = max({cnt1, cnt2, cnt3});
                }
                else {
                    if (i == 0 || j == 0 || k == 0) dp[i][j][k] = 1;
                    else dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                }
                res = max(res, dp[i][j][k]);
            }
        }
    }
    cout << res;
    return 0;
}