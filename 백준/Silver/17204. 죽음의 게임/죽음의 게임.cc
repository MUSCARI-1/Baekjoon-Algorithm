#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int main() {
    FAST_IO;
    int n, k, cnt = 0, ptr = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    while (cnt < 160 && ptr != k) {
        cnt++;
        ptr = v[ptr];
    }
    if (cnt == 160) cout << -1 << endl;
    else cout << cnt << endl;
    return 0;
}


