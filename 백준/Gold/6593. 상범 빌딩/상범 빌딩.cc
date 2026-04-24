#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int l, r, c;

int solve() {
    vector<vector<string>> maze(l);
    vector<vector<vector<bool>>> check(l);
    for (int i = 0; i < l; i++) {
        maze[i].resize(r);
        check[i].resize(r);
        for (int j = 0; j < r; j++) {
            cin >> maze[i][j];
            check[i][j].resize(c, false);
        }
    }
    tuple<int, int, int> start;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < c; k++) {
                if (maze[i][j][k] == 'S') {
                    get<0>(start) = i;
                    get<1>(start) = j;
                    get<2>(start) = k;
                }
            }
        }
    }
    int xx[6] = {1, -1, 0, 0, 0, 0};
    int yy[6] = {0, 0, 1, -1, 0, 0};
    int zz[6] = {0, 0, 0, 0, 1, -1};
    queue<tuple<int, int, int>> q;
    queue<int> depth;
    q.push(start);
    depth.push(0);
    while (q.size() != 0) {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int z = get<2>(q.front());
        int nextD = depth.front() + 1;
        q.pop();
        depth.pop();
        if (check[x][y][z]) continue;
        check[x][y][z] = true;
        for (int i = 0; i < 6; i++) {
            int nx = x + xx[i], ny = y + yy[i], nz = z + zz[i];
            if (nx < 0 || ny < 0 || nz < 0 || nx >= l || ny >= r || nz >= c) continue;
            if (check[nx][ny][nz] || maze[nx][ny][nz] == '#') continue;
            if (maze[nx][ny][nz] == 'E') return nextD;
            q.push({nx, ny, nz});
            depth.push(nextD);
        }
    }
    return -1;
}

int main() {
    FAST_IO
    while (true) {
        cin >> l >> r >> c;
        if (l == 0 && r == 0 && c == 0) break;
        int res = solve();
        if (res == -1) cout << "Trapped!" << endl;
        else cout << "Escaped in " << res << " minute(s)." << endl;
    }
    return 0;
}