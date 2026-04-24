#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 2000000001;

vector<vector<long long>> cnt(65);
vector<long long> res(65, INF);

void solve() {
    int ptr = 1;
    res[1] = 10;
    cnt[1].resize(10);
    for (int i = 0; i < 10; i++) cnt[1][i] = 1;
    for (int i = 2; i < 65; i++) {
        cnt[i].resize(10);
        cnt[i][0] = res[i-1];
        long long total = cnt[i][0];
        for (int j = 1; j < 10; j++) {
            cnt[i][j] = cnt[i][j-1] - cnt[i-1][j-1];
            total += cnt[i][j];
        }
        res[i] = total;
    }
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    solve();
    while (t--) {
        int n;
        cin >> n;
        cout << res[n] << endl;
    }
    return 0;
}