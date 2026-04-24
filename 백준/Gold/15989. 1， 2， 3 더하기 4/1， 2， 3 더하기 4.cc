#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

void solve() {
    int n;
    cin >> n;
    int cnt = 0;
    while (n >= 0) {
        cnt += n / 2 + 1;
        n -= 3;
    }
    cout << cnt << endl;
}

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}