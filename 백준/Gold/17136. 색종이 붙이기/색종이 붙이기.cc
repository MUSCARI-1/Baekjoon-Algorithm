#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

vector<vector<int>> paper(10);
int res = INF;
vector<int> paperSize(6, 5);

bool manu(int x, int y, int size, int flag) { // flag 0 = check, 1 = paint, 2 = erase
    bool c = true;
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (i >= 10 || j >= 10) {
                c = false;
                break;
            }
            if (flag == 0 && paper[i][j] != 1) c = false;
            else if (flag == 1) paper[i][j] = 2;
            else paper[i][j] = 1;
        }
    }
    return c;
}

void backtracking(int x, int y, int depth) {
    for (int i = x; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == x && j < y) j = y;
            if (paper[i][j] != 1) continue;
            for (int size = 1; size <= 5; size++) {
                if (paperSize[size] > 0 && manu(i, j, size, 0)) {
                    manu(i, j, size, 1);
                    paperSize[size]--;
                    backtracking(i, j, depth + 1);
                    manu(i, j, size, 2);
                    paperSize[size]++;
                }
            }
            return;
        }
    }
    res = min(res, depth);
}

int main() {
    FAST_IO
    for (int i = 0; i < 10; i++) {
        paper[i].resize(10);
        for (int j = 0; j < 10; j++) cin >> paper[i][j];
    }
    backtracking(0, 0, 0);
    if (res == INF) cout << -1;
    else cout << res;
    return 0;
}