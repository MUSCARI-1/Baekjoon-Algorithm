#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF = 1000000007;

int main() {

    FAST_IO

    int n, q;

    cin >> n >> q;

    vector<vector<int>> v(3);

    v[0].resize(n+1, 0);

    v[1].resize(n+1, 0);

    v[2].resize(n+1, 0);

    for (int i = 1; i <= n; i++) {

        for (int j = 0; j < 3; j++) v[j][i] = v[j][i-1];

        int idx;

        cin >> idx;

        v[idx-1][i]++;

    }

    while (q--) {

        int a, b;

        cin >> a >> b;

        cout << v[0][b] - v[0][a-1] << " " << v[1][b] - v[1][a-1] << " " << v[2][b] - v[2][a-1] << "\n";

    }

    return 0;

}