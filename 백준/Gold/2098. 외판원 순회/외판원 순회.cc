#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int n;
vector<vector<int>> w, dp;

int tsp(int now, int visit) {
    int res = dp[now][visit];
    if (res != -1) return res;
    if (visit == (1 << n) - 1) {
        if (w[now][0] != 0) return w[now][0];
        return INF;
    }
    res = INF;
    for (int i = 0; i < n; i++) {
        if (w[now][i] == 0 || visit & (1 << i)) continue;
        res = min(res, tsp(i, visit | (1 << i)) + w[now][i]);
    }
    dp[now][visit] = res;
    return res;
}

int main() {
    FAST_IO
    cin >> n;
    w.resize(n);
    dp.resize(n);
    for (int i = 0; i < n; i++) {
        w[i].resize(n);
        dp[i].resize(1 << n, -1);
        for (int j = 0; j < n; j++) cin >> w[i][j];
    }
    cout << tsp(0, 1);
    return 0;
}