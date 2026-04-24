#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF = 1000000007;

int n, k;

vector<int> day;

bool solve(int t) {

    int idx = n - 1;

    int cnt = k;

    bool check = true;

    vector<bool> path(n, false);

    while (idx > 0 && cnt >= 0 && !path[idx]) {

        path[idx] = true;

        if (day[idx] == 1) {

            idx -= t;

            cnt--;

        }

        else idx++;

    }

    if (cnt < 0) check = false;

    if (idx > 0) check = false;

    return check;

}

int binarySearch() {

    int left = 1, right = 200000;

    while (left < right) {

        int mid = (left + right) / 2;

        bool flag = solve(mid);

        if (flag) right = mid;

        else left = mid + 1;

    }

    return left;

}

int main() {

    FAST_IO

    cin >> n >> k;

    day.resize(n);

    for (int i = 0; i < n; i++) cin >> day[i];

    cout << binarySearch();

    return 0;

}