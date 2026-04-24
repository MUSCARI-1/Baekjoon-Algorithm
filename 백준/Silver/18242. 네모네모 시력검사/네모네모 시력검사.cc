#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

vector<vector<char>> eye;

bool check(int x, int y) {
    if (eye[x][y] == '.') return true;
    return false;
}

int main() {
    FAST_IO;
    int n, m;
    cin >> n >> m;
    eye.resize(n);
    for (int i = 0; i < n; i++) {
        eye[i].resize(m);
        for (int j = 0; j < m; j++) cin >> eye[i][j];
    }
    pair<int, int> first = {-1,-1}, last;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (eye[i][j] == '#') {
                if (first.first == -1) {
                    first.first = i;
                    first.second = j;
                }
                else {
                    last.first = i;
                    last.second = j;
                }
            }
        }
    }
    pair<int, int> up = {first.first, (first.second + last.second) / 2};
    pair<int, int> down = {last.first, (first.second + last.second) / 2};
    pair<int, int> left = {(first.first + last.first) / 2, first.second};
    pair<int, int> right = {(first.first + last.first) / 2, last.second};
    if (check(left.first, left.second)) cout << "LEFT" << endl;
    if (check(right.first, right.second)) cout << "RIGHT" << endl;
    if (check(up.first, up.second)) cout << "UP" << endl;
    if (check(down.first, down.second)) cout << "DOWN" << endl;
    return 0;
}