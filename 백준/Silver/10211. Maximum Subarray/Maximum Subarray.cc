#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n), sum(n + 1, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) sum[i+1] = sum[i] + v[i];
    int res = -INF;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++)
            res = max(res, sum[j] - sum[i]);
    }
    cout << res << endl;
}

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}