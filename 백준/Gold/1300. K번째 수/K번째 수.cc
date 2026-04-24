#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int n, k;

int solve() {
    int left = 1, right = INF;
    while (left < right) {
        int mid = (left + right) / 2;
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            cnt += min(mid / i, n);
            if (cnt >= k) break;
        }
        if (cnt < k) left = mid + 1;
        else right = mid;
    }
    return left;
}

int main() {
    FAST_IO
    cin >> n >> k;
    cout << solve();
    return 0;
}