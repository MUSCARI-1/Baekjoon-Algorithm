#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int n, m, res = -1;
vector<string> maze;
vector<vector<vector<bool>>> check;
queue<pair<int, int>> point;
queue<pair<int, int>> info; // key, depth

void bfs() {
    int x = point.front().first, y = point.front().second;
    int key = info.front().first, depth = info.front().second;
    point.pop();
    info.pop();
    if (check[x][y][key] || res != -1) return;
    if (maze[x][y] == '1') {
        res = depth;
        return;
    }
    check[x][y][key] = true;
    if (maze[x][y] != '0' && maze[x][y] != '.') {
        int keyOrDoor = maze[x][y] - 65; // 65 70, 97 102
        if (keyOrDoor < 10) {
            if ((key & (1 << keyOrDoor)) == 0)
                return;
        }
        else
            key |= (1 << (keyOrDoor - 32));
    }
    int xx[4] = {1, -1, 0, 0};
    int yy[4] = {0, 0, 1, -1};
    for (int i = 0; i < 4; i++) {
        int nx = x + xx[i], ny = y + yy[i];
        if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
        if (maze[nx][ny] == '#') continue;
        point.push({nx, ny});
        info.push({key, depth + 1});
    }
}

int main() {
    FAST_IO
    cin >> n >> m;
    maze.resize(n);
    check.resize(n);
    int firstx = -1, firsty = -1;
    for (int i = 0; i < n; i++) {
        cin >> maze[i];
        check[i].resize(m);
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == '0') {
                firstx = i;
                firsty = j;
            }
            check[i][j].resize(1 << 6, false);
        }
    }
    point.push({firstx, firsty});
    info.push({0, 0});
    while (point.size() != 0) bfs();
    cout << res;
    return 0;
}