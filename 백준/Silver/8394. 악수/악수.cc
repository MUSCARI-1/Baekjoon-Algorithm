#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;
long long INFINF = 10000000000000007;

int main() {
    FAST_IO
    int n;
    cin >> n;
    vector<vector<int>> dp(2);
    dp[0].resize(n+1, 0);
    dp[1].resize(n+1, 0);
    dp[0][1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[0][i] = (dp[0][i-1] + dp[1][i-1]) % 10;
        dp[1][i] = dp[0][i-1];
    }
    cout << (dp[0][n] + dp[1][n]) % 10;
    return 0;
}