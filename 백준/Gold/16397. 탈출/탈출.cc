#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, t, g;
    cin >> n >> t >> g;
    vector<bool> check(100000, false);
    queue<pair<int, int>> que;
    que.push({n, 0});
    int res = INF;
    while (que.size() != 0) {
        int idx = que.front().first;
        int cnt = que.front().second;
        que.pop();
        if (check[idx]) continue;
        check[idx] = true;
        if (idx == g) {
            res = cnt;
            break;
        }
        int nextA = idx + 1, nextB = idx * 2;
        if (nextA < 100000) que.push({nextA, cnt + 1});
        if (nextB < 100000 && idx > 0) {
            if (nextB < 10) nextB -= 1;
            else if (nextB < 100) nextB -= 10;
            else if (nextB < 1000) nextB -= 100;
            else if (nextB < 10000) nextB -= 1000;
            else nextB -= 10000;
            que.push({nextB, cnt + 1});
        }
    }
    if (res <= t) cout << res;
    else cout << "ANG";
    return 0;
}