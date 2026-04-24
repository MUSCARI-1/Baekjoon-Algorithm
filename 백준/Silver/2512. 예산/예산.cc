#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF = 1000000007;

int n, m;

vector<int> rural;

int solve() {

    int l = 0, r = 100001;

    int res = 0;

    while (l + 1 < r) {

        int mid = (l + r) / 2;

        int sum = 0, high = 0;

        for (int i = 0; i < n; i++) {

            int now = min(rural[i], mid);

            sum += now;

            high = max(now, high);

        }

        if (sum <= m) {

            l = mid;

            res = high;

        }

        else r = mid;

    }

    return res;

}

int main() {

    FAST_IO

    cin >> n;

    rural.resize(n);

    for (int i = 0; i < n; i++) cin >> rural[i];

    cin >> m;

    cout << solve();

    return 0;

}