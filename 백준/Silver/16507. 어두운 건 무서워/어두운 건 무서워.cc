#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int main() {
    FAST_IO
    int r, c, q;
    cin >> r >> c >> q;
    vector<vector<int>> v(r+1), sum(r+1);
    for (int i = 0; i <= r; i++) {
        v[i].resize(c+1);
        sum[i].resize(c+1, 0);
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) cin >> v[i][j];
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + v[i][j];
        }
    }
    for (int i = 0; i < q; i++) {
        int r1, r2, c1, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        int cnt = sum[r2][c2] - sum[r1 - 1][c2] - sum[r2][c1 - 1] + sum[r1 - 1][c1 - 1];
        int mod = (r2 - r1 + 1) * (c2 - c1 + 1);
        cout << cnt / mod << endl;
    }
    return 0;
}