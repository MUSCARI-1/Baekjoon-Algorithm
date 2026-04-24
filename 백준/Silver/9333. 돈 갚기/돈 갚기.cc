#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

void solve() {
    double dr, db, dm;
    cin >> dr >> db >> dm;
    long long r = round(dr * 100.0), b = round(db * 100.0), m = round(dm * 100.0);
    int cnt = 0;
    long long fb = b;
    while (b > 0 && cnt <= 1200) {
        cnt++;
        long long eza = r * b;
        if (eza % 10000 >= 5000) eza = eza / 10000 + 1;
        else eza /= 10000;
        b += eza;
        b -= m;
        if (fb <= b) cnt = 1201;
    }
    if (cnt > 1200) cout << "impossible" << endl;
    else cout << cnt << endl;
}

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}