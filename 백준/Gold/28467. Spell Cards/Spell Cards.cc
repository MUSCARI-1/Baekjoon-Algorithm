#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;
long long INFINF = 10000000000000007;

int main() {
    FAST_IO
    int n;
    cin >> n;
    vector<long long> spell(n);
    for (int i = 0; i < n; i++) cin >> spell[i];
    vector<bool> use(n, false);
    long long cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        long long p1 = -1, p2 = -1, sum = INFINF;
        for (int j = 0; j < n - 1; j++) {
            if (use[j]) continue;
            for (int k = j + 1; k < n; k++) {
                if (use[k]) continue;
                long long now = spell[j] + spell[k];
                if (sum > now) {
                    sum = now;
                    p1 = j;
                    p2 = k;
                }
                break;
            }
        }
        cnt += spell[p1] + spell[p2];
        if (spell[p1] > spell[p2]) use[p2] = true;
        else use[p1] = true;
    }
    cout << cnt;
    return 0;
}