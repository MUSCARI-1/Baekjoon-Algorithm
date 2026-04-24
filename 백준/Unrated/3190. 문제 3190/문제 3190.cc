#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int main() {
    FAST_IO
    int n, k, l;
    cin >> n >> k;
    vector<vector<int>> board(n);
    queue<pair<int,char>> arrow;
    for (int i = 0; i < n; i++) board[i].resize(n, 0);
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        board[a-1][b-1] = 2;
    }
    cin >> l;
    for (int i = 0; i < l; i++) {
        int x;
        char c;
        cin >> x >> c;
        arrow.push({x, c});
    }
    queue<pair<int, int>> body;
    body.push({0,0});
    board[0][0] = 1;
    int headX = 0, headY = 0;
    int wasd = 3;
    int xx[4] = {-1,0,1,0};
    int yy[4] = {0,-1,0,1};
    int time = 0;
    while (true) {
        time++;
        int nx = headX + xx[wasd], ny = headY + yy[wasd];
        if (nx < 0 || ny < 0 || nx >= n || ny >= n) break;
        if (board[nx][ny] == 1) break;
        bool flag = false;
        if (board[nx][ny] == 2) flag = true;
        board[nx][ny] = 1;
        body.push({nx, ny});
        if (!flag) {
            int x = body.front().first, y = body.front().second;
            body.pop();
            board[x][y] = 0;
        }
        headX = nx, headY = ny;
        if (arrow.size() != 0 && time == arrow.front().first) {
            if (arrow.front().second == 'L') wasd = (wasd + 1) % 4;
            else wasd = (wasd + 3) % 4;
            arrow.pop();
        }
    }
    cout << time;
    return 0;
}