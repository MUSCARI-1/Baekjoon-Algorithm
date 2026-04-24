#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;
long long INFINF = 10000000000000007;

int main() {
    FAST_IO
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int res = 0;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        cnt = max(v[i] - v[i + 1], cnt + v[i] - v[i + 1]);
        if (cnt < 0) cnt = 0;
        res = max(cnt, res);
    }
    cout << res;
    return 0;
}