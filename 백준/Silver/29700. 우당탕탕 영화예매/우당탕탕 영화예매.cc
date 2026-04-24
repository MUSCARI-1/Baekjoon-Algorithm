#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

vector<string> s;
int n, m, k, cnt = 0;

void solve(int a, int b) {
    bool check = true;
    for (int i = 1; i < k ;i++) {
        if (s[a][b+i] == '1') check = false;
    }
    if (check) cnt++;
}

int main() {
    FAST_IO;
    cin >> n >> m >> k;
    s.resize(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == '1' || m - j < k) continue;
            solve(i, j);
        }
    }
    cout << cnt;
    return 0;
}