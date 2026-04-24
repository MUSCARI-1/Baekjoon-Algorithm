#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, a, b, m;
    cin >> n >> a >> b;
    vector<vector<int>> v(n+1);
    vector<bool> check(n+1, false);
    cin >> m;
    for (int i = 0; i < m; i++) {
        int c, d;
        cin >> c >> d;
        v[c].push_back(d);
        v[d].push_back(c);
    }
    queue<pair<int, int>> q; // idx, depth
    q.push({a, 0});
    while (q.size() != 0) {
        int idx = q.front().first;
        int depth = q.front().second;
        q.pop();
        if (check[idx]) continue;
        check[idx] = true;
        if (idx == b) {
            cout << depth;
            return 0;
        }
        for (int i = 0; i < v[idx].size(); i++) q.push({v[idx][i], depth + 1});
    }
    cout << -1;
    return 0;
}