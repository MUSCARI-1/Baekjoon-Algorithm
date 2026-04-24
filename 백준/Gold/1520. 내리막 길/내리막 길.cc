#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int n, m;
vector<vector<int>> board;
vector<vector<int>> dp;

int recur(int x, int y) {
    if (x == 0 && y == 0) return 1;
    if (dp[x][y] != -1) return dp[x][y];
    int xx[4] = {1, 0, -1 , 0};
    int yy[4] = {0, -1, 0, 1};
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        int nx = x + xx[i];
        int ny = y + yy[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (board[nx][ny] <= board[x][y]) continue;
        cnt += recur(nx, ny);
    }
    dp[x][y] = cnt;
    return cnt;
}

int main() {
    FAST_IO
    cin >> n >> m;
    board.resize(n);
    dp.resize(n);
    for (int i = 0; i < n; i++) {
        board[i].resize(m);
        dp[i].resize(m, -1);
        for (int j = 0; j < m; j++) cin >> board[i][j];
    }
    cout << recur(n - 1, m - 1);
    return 0;
}