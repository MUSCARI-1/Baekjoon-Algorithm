#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;

long long facto(long long n) {
    long long cnt = 1;
    for (long long i = 2; i <= n; i++)
        cnt *= i;
    return cnt;
}

void solve() {
    string time;
    long long n, t, l;
    cin >> time >> n >> t >> l;
    long long cnt;
    if (time == "O(N)") cnt = n;
    else if (time == "O(N^2)") cnt = pow(n, 2);
    else if (time == "O(N^3)") {
        if (n > 10000) {
            cout << "TLE!" << endl;
            return;
        }
        cnt = pow(n, 3);
    }
    else if (time == "O(2^N)") {
        if (n > 35) {
            cout << "TLE!" << endl;
            return;
        }
        cnt = pow(2, n);
    }
    else {
        if (n > 14) {
            cout << "TLE!" << endl;
            return;
        }
        cnt = facto(n);
    }
    cnt *= t;
    long long standard = 100000000 * l;
    if (cnt > standard) cout << "TLE!" << endl;
    else cout << "May Pass." << endl;
}

int main() {
    FAST_IO
    int c;
    cin >> c;
    while (c--) solve();
    return 0;
}