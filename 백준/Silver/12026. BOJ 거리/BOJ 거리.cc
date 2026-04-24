#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int main() {
    FAST_IO;
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> dp(n, INF);
    dp[0] = 0;
    char boj[3] = {'B', 'O', 'J'};
    for (int i = 1; i < n; i++) {
        char nowBoj = s[i];
        int bojPtr = INF;
        for (int j = 0; j < 3; j++)
            if (boj[j] == nowBoj) bojPtr = j - 1;
        if (bojPtr == -1) bojPtr = 2;
        for (int j = 0; j < i; j++) {
            if (s[j] != boj[bojPtr]) continue;
            dp[i] = min (dp[i], dp[j] + (i - j) * (i - j));
        }
    }
    if (dp[n-1] == INF) cout << -1 << endl;
    else cout << dp[n-1] << endl;
    return 0;
}


