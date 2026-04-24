#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, m;
    cin >> n >> m;
    vector<vector<int>> info(n); // info[i][j] = time, i == runner
    for (int i = 0; i < n; i++) {
        info[i].resize(m + 1, 0);       // j == prefix section
        for (int j = 1; j <= m; j++) {
            int a;
            cin >> a;
            info[i][j] = info[i][j-1] + a;
        }
    }
    vector<vector<pair<int, int>>> prefix(m); // prefix[i][j].f,s
    for (int i = 0; i < n; i++) { // i == section, j == cntInfo
        for (int j = 0; j < m; j++) { // first == idx, second = inout
            prefix[j].push_back({info[i][j], 1});
            prefix[j].push_back({info[i][j+1], -1});
        }
    }
    for (int i = 0; i < m; i++) sort(prefix[i].begin(), prefix[i].end());
    vector<int> res(m, 0);
    for (int i = 0; i < m; i++) {
        int cnt = 0, nowtime = 0, nowIdx = 0;
        while (nowIdx < 2 * n) {
            nowtime = prefix[i][nowIdx].first;
            cnt += prefix[i][nowIdx].second;
            nowIdx++;
            while (nowIdx < 2 * n && prefix[i][nowIdx].first == nowtime) {
                nowtime = prefix[i][nowIdx].first;
                cnt += prefix[i][nowIdx].second;
                nowIdx++;
            }
            res[i] = max(res[i], cnt);
        }
    }
    for (int i = 0; i < m; i++) cout << res[i] << " ";
    return 0;
}