#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int n, p, res = INF;
vector<vector<int>> w;
vector<int> dp;

void bfs(int idx) {
    if (dp[idx] == INF) return;
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if ((idx & (1 << i)) != 0) cnt++;
    if (cnt >= p) {
        res = min(res, dp[idx]);
        return;
    }
    for (int i = 0; i < n; i++) {
        if (((1 << i) & idx) == 0) continue;
        for (int j = 0; j < n; j++) {
            if (i == j || ((1 << j) & idx) != 0) continue;
            int status = idx;
            status |= (1 << j);
            dp[status] = min(dp[status], dp[idx] + w[i][j]);
        }
    }
}

int main() {
    FAST_IO
    cin >> n;
    w.resize(n);
    dp.resize(1 << n, INF);
    for (int i = 0; i < n; i++) {
        w[i].resize(n);
        for (int j = 0; j < n; j++) cin >> w[i][j];
    }
    string s;
    cin >> s >> p;
    int cnt = 0, first = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == 'Y') {
            cnt++;
            first |= (1 << i);
        }
    dp[first] = 0;
    for (int i = first; i < (1 << n); i++) bfs(i);
    if (res != INF) cout << res;
    else cout << -1;
    return 0;
}