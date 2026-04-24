#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long INF = 1000000007;

int main() {
    FAST_IO
    int n, l, cnt = 0, idx = 0;
    cin >> n >> l;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (idx >= v[i]) continue;
        idx = v[i] + l - 1;
        cnt++;
    }
    cout << cnt;
    return 0;
}