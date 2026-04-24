#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int r, c, k, cnt = 0;
vector<string> board;

void backtracking(int x, int y, int depth) {
    if (x == 0 && y == c - 1) {
        if (depth == k) cnt++;
        return;
    }
    if (depth > k) return;
    int xx[4] = {1, 0, -1, 0};
    int yy[4] = {0, -1, 0, 1};
    for (int i = 0; i < 4; i++) {
        int nx = x + xx[i], ny = y + yy[i];
        if (nx < 0 || ny < 0 || nx >= r || ny >= c) continue;
        if (board[nx][ny] != '.') continue;
        board[nx][ny] = 'x';
        backtracking(nx, ny, depth + 1);
        board[nx][ny] = '.';
    }
}

int main() {
    FAST_IO
    cin >> r >> c >> k;
    board.resize(r);
    for (int i = 0; i < r; i ++) cin >> board[i];
    board[r - 1][0] = 'x';
    backtracking(r - 1, 0, 1);
    cout << cnt;
    return 0;
}