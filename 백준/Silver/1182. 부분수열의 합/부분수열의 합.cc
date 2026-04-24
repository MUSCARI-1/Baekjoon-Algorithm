#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long INF = 1000000007;

int n, s, res = 0;
vector<int> v;

void dfs(int cnt, int idx, bool flag) {
    if (cnt == s && flag) res++;
    if (idx >= n) return;
    int now = cnt + v[idx];
    dfs(now, idx + 1, true);
    dfs(cnt, idx + 1, false);
}

int main() {
    FAST_IO
    cin >> n >> s;
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    dfs(0, 0, false);
    cout << res;
    return 0;
}