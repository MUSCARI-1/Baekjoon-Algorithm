#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long INF = 1000000007;

long long solve() {
    int n, exp = 1;
    long long cnt = 2;
    cin >> n;
    if (n <= 2) return 1;
    int junc = -1;
    long long juncCnt = -1;
    while (exp < n - 2) {
        if (exp * 2 <= n - 2 && exp < 30000) {
            exp *= 2;
            cnt = (cnt * cnt) % INF;
            continue;
        }
        if (junc == -1) {
            junc = exp;
            juncCnt = cnt;
        }
        if (exp + junc <= n - 2) {
            exp += junc;
            cnt = (cnt * juncCnt) % INF;
        }
        else {
            exp++;
            cnt = (cnt * 2) % INF;
        }
    }
    return cnt;
}

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) cout << solve() << endl;
    return 0;
}