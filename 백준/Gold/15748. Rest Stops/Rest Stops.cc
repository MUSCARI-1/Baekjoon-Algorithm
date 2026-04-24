#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int l, n, F, B;
    cin >> l >> n >> F >> B;
    vector<pair<int, int>> v; // value, x
    for (int i = 0; i < n; i++) {
        int x, value;
        cin >> x >> value;
        v.push_back({value, -x});
    }
    sort(v.begin(), v.end(), greater<>());
    long long score = 0, idx = 0;
    for (int i = 0; i < n; i++) {
        if (idx > -v[i].second) continue;
        long long dist = (-v[i].second - idx) * F - (-v[i].second - idx) * B;
        score += dist * v[i].first;
        idx = -v[i].second;
    }
    cout << score;
    return 0;
}