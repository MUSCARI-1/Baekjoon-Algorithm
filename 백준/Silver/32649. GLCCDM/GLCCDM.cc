#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int a, b, k, cnt = 2;
    cin >> a >> b >> k;
    vector<bool> v(1000001, false);
    v[a] = true;
    for (int i = a + 1; i < b; i++) {
        if (i % a == 0 && b % i == 0) {
            v[i] = true;
            cnt++;
        }
    }
    if (b % a != 0 || cnt < k) cout << -1;
    else {
        cnt = 0;
        for (int i = a; i < 1000001; i++) {
            if (v[i]) {
                cout << i << " ";
                cnt++;
            }
            if (cnt >= k - 1) break;
        }
        cout << b;
    }
    return 0;
}