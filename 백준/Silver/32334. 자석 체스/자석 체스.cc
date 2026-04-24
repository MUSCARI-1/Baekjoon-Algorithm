#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, d;
    cin >> n >> d;
    vector<vector<int>> board(n),cnt(n);
    for (int i = 0; i < n; i++) cnt[i].resize(n, 0);
    for (int i = 0; i < n; i++) {
        board[i].resize(n);
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            if (board[i][j] == 0) continue;
            for (int x = i - d; x <= i + d; x++) {
                for (int y = j - d; y <= j + d; y++) {
                    if (x < 0 || y < 0 || x >= n || y >= n) continue;
                    cnt[x][y]++;
                }
            }
        }
    }
    int res = INF;
    int resX = -1, resY = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1) continue;
            if (res > cnt[i][j]) {
                res = cnt[i][j];
                resX = i;
                resY = j;
            }
        }
    }
    if (res == 0) cout << resX + 1 << " " << resY + 1;
    else {
        cout << resX + 1 << " " << resY + 1 << endl;
        cout << res;
    }
    return 0;
}