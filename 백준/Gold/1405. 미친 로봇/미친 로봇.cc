#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int n;
long double cnt = 0;
vector<vector<bool>> check(30);
vector<long double> arrow(4);

void backtracking(int x, int y, int depth, long double percent) {
    if (check[x][y]) {
        cnt += percent;
        return;
    }
    else if (depth == n) return;
    check[x][y] = true;
    int xx[4] = {0, 0, 1, -1};
    int yy[4] = {1, -1, 0, 0};
    for (int i = 0; i < 4; i++) {
        int nx = x + xx[i], ny = y + yy[i];
        backtracking(nx, ny, depth + 1, percent * arrow[i]);
    }
    check[x][y] = false;
}

int main() {
    FAST_IO
    cin >> n;
    for (int i = 0; i < 4; i++) {
        cin >> arrow[i];
        arrow[i] /= 100;
    }
    cout << fixed;
    cout.precision(12);
    for (int i = 0; i < 30; i++) check[i].resize(30, false);
    backtracking(15, 15, 0, 1);
    cout << 1 - cnt;
    return 0;
}