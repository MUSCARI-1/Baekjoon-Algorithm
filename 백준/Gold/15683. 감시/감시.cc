#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int n, m, res = INF;
vector<vector<int>> board;
int xx[4] = {0, -1, 0, 1};
int yy[4] = {1, 0, -1, 0};

queue<pair<int, int>> cctv(int a, int b, int arrow) {
    queue<pair<int, int>> que;
    for (int i = 0; i < 4; i++) {
        int idx = (1 << i);
        if ((arrow & idx) == 0) continue;
        int nx = a + xx[i], ny = b + yy[i];
        while (true) {
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) break;
            if (board[nx][ny] == 6) break;
            else if (board[nx][ny] == 0) {
                board[nx][ny] = -1;
                que.push({nx, ny});
            }
            nx += xx[i], ny += yy[i];
        }
    }
    return que;
}

void backtracking(int a, int b) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < a || (i == a && j <= b)) continue;
            if (board[i][j] < 1 || board[i][j] > 5) continue;
            queue<pair<int, int>> off;
            if (board[i][j] == 1) {
                off = cctv(i, j, 1);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
                off = cctv(i, j, 2);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
                off = cctv(i, j, 4);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
                off = cctv(i, j, 8);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
            }
            else if (board[i][j] == 2) {
                off = cctv(i, j, 5);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
                off = cctv(i, j, 10);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
            }
            else if (board[i][j] == 3) {
                off = cctv(i, j, 3);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
                off = cctv(i, j, 6);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
                off = cctv(i, j, 12);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
                off = cctv(i, j, 9);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
            }
            else if (board[i][j] == 4) {
                off = cctv(i, j, 7);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
                off = cctv(i, j, 14);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
                off = cctv(i, j, 13);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
                off = cctv(i, j, 11);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
            }
            else {
                off = cctv(i, j, 15);
                backtracking(i, j);
                while (off.size() != 0) {
                    int x = off.front().first, y = off.front().second;
                    off.pop();
                    board[x][y] = 0;
                }
            }
            return;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0) cnt++;
        }
    }
    res = min(res, cnt);
}

int main() {
    FAST_IO
    cin >> n >> m;
    board.resize(n);
    for (int i = 0; i < n; i++) {
        board[i].resize(m);
        for (int j = 0; j < m; j++) cin >> board[i][j];
    }
    backtracking(-1, -1);
    cout << res;
    return 0;
}