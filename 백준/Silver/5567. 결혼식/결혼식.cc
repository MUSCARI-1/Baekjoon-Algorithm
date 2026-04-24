#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, m, cnt = 0;
    cin >> n >> m;
    vector<vector<int>> v(n+1);
    vector<bool> check(n+1, false);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    queue<pair<int, int>> que;
    que.push({1, 0});
    while (que.size() != 0) {
        int idx = que.front().first;
        int depth = que.front().second;
        que.pop();
        if (check[idx]) continue;
        check[idx] = true;
        if (depth > 1) continue;
        for (int i = 0; i < v[idx].size(); i++) {
            que.push({v[idx][i], depth+1});
        }
    }
    for (int i = 2; i <= n; i++)
        if (check[i]) cnt++;
    cout << cnt;
    return 0;
}