#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> board(n);
    for (int i = 0; i < n; i++) cin >> board[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (board[i][j] == '.') cnt++;
    if (cnt % 2 == 0) cout << "pizza" << endl;
    else cout << "sewon" << endl;
}

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}