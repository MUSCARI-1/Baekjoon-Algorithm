#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;
long long INFINF = 10000000000000007;

int main() {
    FAST_IO
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> card(m, 0);
    for (int i = 0; i < n; i++) {
        int a, idx = -1, shortest = INF;
        cin >> a;
        for (int j = 0; j < m; j++) {
            if (shortest > card[j]) {
                idx = j;
                shortest = card[j];
            }
        }
        card[idx] += a;
    }
    int mini = INF;
    for (int i = 0; i < m; i++) mini = min(mini, card[i]);
    if (mini <= k) cout << "WAIT";
    else cout << "GO";
    return 0;
}