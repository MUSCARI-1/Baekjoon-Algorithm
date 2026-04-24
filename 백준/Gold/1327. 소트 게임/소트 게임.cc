#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int n, k, res = -1, last = 0;
vector<bool> check;
queue<pair<int, int>> num;

void bfs() {
    int now = num.front().first, depth = num.front().second;
    num.pop();
    if (check[now] || res != -1) return;
    if (now == last) {
        res = depth;
        return;
    }
    check[now] = true;
    vector<int> nowArr(n, 0);
    for (int i = n - 1; i >= 0; i--) {
        int number = now & 7;
        nowArr[i] = number;
        now >>= 3;
    }
    for (int i = 0; i <= n - k; i++) {
        auto temp = nowArr;
        int p1 = i, p2 = i + k - 1;
        while (p1 < p2) {
            swap(temp[p1], temp[p2]);
            p1++;
            p2--;
        }
        int next = 0;
        for (int i = 0; i < n; i++) {
            next <<= 3;
            next += temp[i];
        }
        num.push({next, depth + 1});
    }
}

int main() {
    FAST_IO
    cin >> n >> k;
    check.resize(1 << n * 3, false);
    int first = 0;
    for (int i = 0; i < n; i++) {
        first <<= 3, last <<= 3;
        int a;
        cin >> a;
        first += --a;
        last += i;
    }
    num.push({first, 0});
    while (num.size() != 0) bfs();
    cout << res;
    return 0;
}