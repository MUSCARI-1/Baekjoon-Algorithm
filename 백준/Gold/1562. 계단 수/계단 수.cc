#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000000;

int main() {
    FAST_IO
    int n;
    cin >> n;
    vector<vector<vector<int>>> dp(n + 1); // dp[i][j][k] = l  i = n, j = lastNum, k = bitmask
    for (int i = 0; i < n + 1; i++) {
        dp[i].resize(10);
        for (int j = 0; j < 10; j++)
            dp[i][j].resize(1 << 10, 0);
    }
    for (int i = 1; i < 10; i++)
        dp[1][i][1 << i] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 1; k < (1 << 10); k++) {
                if (dp[i][j][k] == 0) continue;
                int leftJ = j - 1, rightJ = j + 1;
                if (leftJ >= 0) {
                    int idxLeft = k | (1 << (leftJ));
                    dp[i + 1][leftJ][idxLeft] = (dp[i + 1][leftJ][idxLeft] + dp[i][j][k]) % INF;
                }
                if (rightJ < 10) {
                    int idxRight = k | (1 << (rightJ));
                    dp[i + 1][rightJ][idxRight] = (dp[i + 1][rightJ][idxRight] + dp[i][j][k]) % INF;
                }
            }
        }
    }
    long long res = 0;
    for (int i = 0; i < 10; i++)
        res += dp[n][i][(1 << 10) - 1];
    cout << res % INF;
    return 0;
}