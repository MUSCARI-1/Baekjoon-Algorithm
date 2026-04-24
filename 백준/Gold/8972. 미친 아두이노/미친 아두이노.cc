#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int r, c, x, y;
vector<string> board;
string load;
bool flag = true;
int xx[9] = {1, 1, 1, 0, 0, 0, -1, -1, -1};
int yy[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

void moving(int k) {
    int idx = load[k] - '0' - 1;
    board[x][y] = '.';
    x += xx[idx];
    y += yy[idx];
    if (board[x][y] == 'R') {
        flag = false;
        return;
    }
    board[x][y] = 'I';
    queue<pair<int, int>> que, boom;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (board[i][j] == 'R') {
                que.push({i, j});
                board[i][j] = '.';
            }
        }
    }
    while (que.size() != 0) {
        int rx = que.front().first, ry = que.front().second;
        que.pop();
        int shortest = INF;
        int shortcutX = INF, shortcutY = INF;
        for (int i = 0; i < 9; i++) {
            int nx = rx + xx[i], ny = ry + yy[i];
            if (nx < 0 || ny < 0 || nx >= r || ny >= c) continue;
            else if (board[nx][ny] == 'I') {
                flag = false;
                return;
            }
            int dist = abs(nx - x) + abs(ny - y);
            if (shortest <= dist) continue;
            shortest = dist;
            shortcutX = nx;
            shortcutY = ny;
        }
        if (board[shortcutX][shortcutY] == 'R') boom.push({shortcutX, shortcutY});
        else board[shortcutX][shortcutY] = 'R';
    }
    while (boom.size() != 0) {
        int rx = boom.front().first, ry = boom.front().second;
        boom.pop();
        board[rx][ry] = '.';
    }
}

int main() {
    FAST_IO
    cin >> r >> c;
    board.resize(r);
    for (int i = 0; i < r; i++) cin >> board[i];
    cin >> load;
    int size = load.size();
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (board[i][j] == 'I') {
                x = i;
                y = j;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        moving(i);
        if (!flag) {
            cout << "kraj " << i + 1;
            return 0;
        }
    }
    for (int i = 0; i < r; i++) cout << board[i] << endl;
    return 0;
}