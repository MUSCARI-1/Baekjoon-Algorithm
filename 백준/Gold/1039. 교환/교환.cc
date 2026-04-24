#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    string n;
    int k;
    cin >> n >> k;
    int size = n.size();
    if (size == 1 || (size == 2 && n[1] == '0')) {
        cout << -1;
        return 0;
    }
    vector<vector<bool>> check(2);
    check[0].resize(1000001, false);
    check[1].resize(1000001, false);
    queue<pair<string, int>> que;
    que.push({n, 0});
    while (que.size() != 0) {
        string now = que.front().first;
        int cnt = que.front().second;
        que.pop();
        if (check[cnt % 2][stoi(now)]) continue;
        check[cnt % 2][stoi(now)] = true;
        if (cnt == k) continue;
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (i == 0 && now[j] == '0') continue;
                string next = now;
                swap(next[i], next[j]);
                que.push({next, cnt + 1});
            }
        }
    }
    int res = -1;
    for (int i = 0; i < 1000001; i++)
        if (check[k % 2][i]) res = i;
    cout << res;
    return 0;
}