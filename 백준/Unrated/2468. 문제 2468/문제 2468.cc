#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int n;
vector<vector<int>> board;
vector<int> res;

void dfs(int a, int b, int h, vector<vector<int>> &check) {
    stack<pair<int, int>> stk;
    stk.push({a, b});
    check[a][b] = 1;
    int xx[4] = {1, 0, -1, 0};
    int yy[4] = {0, -1, 0, 1};
    while (stk.size() != 0) {
        int x = stk.top().first;
        int y = stk.top().second;
        stk.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + xx[i];
            int ny = y + yy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (check[nx][ny] == 1 || board[nx][ny] <= h) continue;
            check[nx][ny] = 1;
            stk.push({nx, ny});
        }
    }
}

int main() {
    FAST_IO
    cin >> n;
    board.resize(n);
    for (int i = 0; i < n; i++) {
        board[i].resize(n);
        for (int j = 0; j < n; j++) cin >> board[i][j];
    }
    int res = 0;
    for (int i = 0; i <= 100; i++) {
        int cnt = 0;
        vector<vector<int>> check(n);
        for (int j = 0; j < n; j++) check[j].resize(n, 0);
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (board[j][k] > i && check[j][k] == 0) {
                    dfs(j, k, i, check);
                    cnt++;
                }
            }
        }
        res = max(cnt, res);
    }
    cout << res;
    return 0;
}