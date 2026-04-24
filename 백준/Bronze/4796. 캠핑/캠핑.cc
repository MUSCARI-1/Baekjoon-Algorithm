#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long INF = 1000000007;

int main() {
    FAST_IO
    int l, p, v, t = 1;
    while (true) {
        cin >> l >> p >> v;
        if (l == 0) break;
        int cnt = 0;
        cnt += (v / p) * l;
        v %= p;
        cnt += min(v, l);
        cout << "Case " << t << ": " << cnt << endl;
        t++;
    }
    return 0;
}