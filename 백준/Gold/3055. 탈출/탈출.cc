#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, m;
    vector<string> maze;
    cin >> n >> m;
    maze.resize(n);
    queue<pair<int, int>> fire, person;
    for (int i = 0; i < n; i++) {
        cin >> maze[i];
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == 'S') person.push({i, j});
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
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if (maze[nx][ny] == 'D') {
                    escape = true;
                    break;
                }
                else if (maze[nx][ny] == '.') {
                    person.push({nx, ny});
                    maze[nx][ny] = 'S';
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
                if (maze[nx][ny] == 'S' || maze[nx][ny] == '.') {
                    maze[nx][ny] = '*';
                    fire.push({nx, ny});
                }
            }
        }
        time++;
    }
    if (escape) cout << time << endl;
    else cout << "KAKTUS" << endl;
    return 0;
}