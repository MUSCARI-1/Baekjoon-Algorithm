#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

vector<int> dp; // dp[a] = b; a = 무게, b = 최대 가치
vector<pair<int, int>> knapsack;

int main() {
    FAST_IO
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int w, v;
        cin >> w >> v;
        knapsack.push_back({w, v});
    }
    dp.resize(k + 1, -INF);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        int nowW = knapsack[i].first, nowV = knapsack[i].second;
        for(int j = k - nowW; j >= 0; j--) {
            dp[j + nowW] = max(dp[j] + nowV, dp[j + nowW]);
        }
    }
    int res = 0;
    for (int i = 0; i <= k; i++) res = max(res, dp[i]);
    cout << res;
    return 0;
}