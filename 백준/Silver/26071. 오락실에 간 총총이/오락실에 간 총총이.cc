#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

vector<string> board;
int n;

int UpDownDist() {
    int dist = 0;
    int top = -1, bot = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '.') continue;
            if (top == -1) top = i;
            else bot = i;
        }
    }
    if (top == bot) return 0;
    else dist += bot - top + min(top, n - bot - 1);
    return dist;
}

int LeftRightDist() {
    int dist = 0;
    int left = -1, right = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[j][i] == '.') continue;
            if (left == -1) left = i;
            else right = i;
        }
    }
    if (left == right) return 0;
    else dist += right - left + min(left, n - right - 1);
    return dist;
}

int main() {
    FAST_IO
    cin >> n;
    board.resize(n);
    for (int i = 0; i < n; i++) cin >> board[i];
    int flag = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (board[i][j] == 'G') flag++;
    if (flag == 1) {
        cout << 0 << endl;
        return 0;
    }
    int cnt = UpDownDist() + LeftRightDist();
    cout << cnt << endl;
    return 0;
}