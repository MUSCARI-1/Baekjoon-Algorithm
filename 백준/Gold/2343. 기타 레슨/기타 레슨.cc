#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF = 1000000007;

int n, m;

vector<int> minute;

int solve() {

    int l = 0, r = INF;

    while (l < r) {

        int mid = (l + r) / 2;

        int cnt = 1, now = mid;

        bool flag = true;

        for (int i = 0; i < n; i++) {

            if (mid < minute[i]) {

                flag = false;

                break;

            }

            else if (now - minute[i] < 0) {

                now = mid;

                cnt++;

            }

            now -= minute[i];

        }

        if (cnt > m) flag = false;

        if (flag) r = mid;

        else l = mid + 1;

    }

    return l;

}

int main() {

    FAST_IO

    cin >> n >> m;

    minute.resize(n);

    for (int i = 0; i < n; i++) cin >> minute[i];

    cout << solve();

    return 0;

}