#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

void solve() {
    FAST_IO
    int n, m;
    vector<string> maze;
    cin >> m >> n;
    maze.resize(n);
    queue<pair<int, int>> fire, person;
    for (int i = 0; i < n; i++) {
        cin >> maze[i];
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == '@') person.push({i, j});
            else if (maze[i][j] == '*') fire.push({i, j});
        }
    }
    bool escape = false;
    int time = 1;
    int xx[4] = {1, 0, -1, 0};
    int yy[4] = {0, -1, 0, 1};
    while (person.size() != 0) {
        int turnFire = fire.size(), turnPerson = person.size();
        while (turnPerson--) {
            int x = person.front().first;
            int y = person.front().second;
            person.pop();
            if (maze[x][y] == '*') continue;
            for (int i = 0; i < 4; i++) {
                int nx = x + xx[i];
                int ny = y + yy[i];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
                    escape = true;
                    break;
                }
                if (maze[nx][ny] == '.') {
                    person.push({nx, ny});
                    maze[nx][ny] = '@';
                }
            }
        }
        if (escape) break;
        while (turnFire--) {
            int x = fire.front().first;
            int y = fire.front().second;
            fire.pop();
            for (int i = 0; i < 4; i++) {
                int nx = x + xx[i];
                int ny = y + yy[i];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if (maze[nx][ny] == '@' || maze[nx][ny] == '.') {
                    maze[nx][ny] = '*';
                    fire.push({nx, ny});
                }
            }
        }
        time++;
    }
    if (escape) cout << time << endl;
    else cout << "IMPOSSIBLE" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}