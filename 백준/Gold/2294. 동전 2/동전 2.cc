#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

vector<int> dp; // dp[a] = b; a == 동전의 가치, b = 최소 개수
vector<int> coin;

int main() {
    FAST_IO
    int n, k;
    cin >> n >> k;
    coin.resize(n);
    dp.resize(k + 1, INF);
    for (int i = 0; i < n; i++) cin >> coin[i];
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j + coin[i] <= k; j++) {
            dp[j + coin[i]] = min(dp[j] + 1, dp[j + coin[i]]);
        }
    }
    if (dp[k] != INF) cout << dp[k];
    else cout << -1;
    return 0;
}