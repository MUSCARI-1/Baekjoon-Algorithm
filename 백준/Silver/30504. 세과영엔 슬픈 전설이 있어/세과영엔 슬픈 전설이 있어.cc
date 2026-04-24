#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF = 1000000007;

int main() {

    FAST_IO

    int n;

    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) cin >> b[i];

    sort(b.begin(), b.end());

    vector<pair<int, int>> info; // need a[i], idx

    for (int i = 0; i < n; i++) {

        info.push_back({a[i], i});

    }

    sort(info.begin(), info.end());

    bool flag = true;

    vector<pair<int, int>> res; // idx, b[i]

    for (int i = 0; i < n; i++) {

        if (b[i] < info[i].first) flag = false;

        res.push_back({info[i].second, b[i]});

    }

    if (!flag) {

        cout << -1;

        return 0;

    }

    sort(res.begin(), res.end());

    for (int i = 0; i < n; i++) cout << res[i].second << " ";

    return 0;

}