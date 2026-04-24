#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

vector<vector<int>> board;
int n, m;
int xx[4] = {1,-1,0,0};
int yy[4] = {0,0,1,-1};

int bfs(int a, int b) {
    queue<pair<int, int>> que;
    que.push({a,b});
    int cnt = 0;
    while (que.size() != 0) {
        int x = que.front().first, y = que.front().second;
        que.pop();
        if (board[x][y] == 0) continue;
        board[x][y] = 0;
        cnt++;
        for (int i = 0; i < 4; i++) {
            int nx = x + xx[i], ny = y + yy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (board[nx][ny] == 0) continue;
            que.push({nx, ny});
        }
    }
    return cnt;
}

int main() {
    FAST_IO
    cin >> n >> m;
    board.resize(n);
    for (int i = 0; i < n; i++) {
        board[i].resize(m);
        for (int j = 0; j < m; j++) cin >> board[i][j];
    }
    int res = 0, total = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0) continue;
            total++;
            int cnt = bfs(i,j);
            res = max(res, cnt);
        }
    }
    cout << total << endl << res;
    return 0;
}