#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int n, m, k;
vector<vector<int>> board;
vector<int> res;

int dfs(int a, int b) {
    stack<pair<int, int>> stk;
    stk.push({a, b});
    board[a][b] = 1;
    int cnt = 1;
    int xx[4] = {1, 0, -1, 0};
    int yy[4] = {0, -1, 0, 1};
    while (stk.size() != 0) {
        int x = stk.top().first;
        int y = stk.top().second;
        stk.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + xx[i];
            int ny = y + yy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (board[nx][ny] != -1) continue;
            board[nx][ny] = 1;
            stk.push({nx, ny});
            cnt++;
        }
    }
    return cnt;
}

int main() {
    FAST_IO
    cin >> n >> m >> k;
    board.resize(n);
    for (int i = 0; i < n; i++) board[i].resize(m, -1);
    for (int i = 0; i < k; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i = b; i < d; i++) {
            for (int j = a; j < c; j++) board[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (board[i][j] == -1) res.push_back(dfs(i,j));
    }
    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
    return 0;
}