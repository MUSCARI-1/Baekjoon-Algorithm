#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    long long n;
    cin >> n;
    vector<long long> v = {1, 0, 1, 1, 1, 1};
    long long cnt = 0;
    if (n <= 5) {
        cout << n;
        return 0;
    }
    for (int i = 6; i <= n; i++) {
        cnt += v[i % 6];
        if ((i + 1) % 6 == 0) {
            for (int j = 0; j < 6; j++) v[j]++;
        }
    }
    cout << n + cnt;
    return 0;
}