#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, m, p;
    cin >> n >> m >> p;
    vector<int> senior(m + 1, -1);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (senior[b] != -1) continue;
        senior[b] = a;
    }
    vector<bool> check(m + 1, false);
    bool flag = false;
    int cnt = 0;
    while (!check[p]) {
        check[p] = true;
        if (senior[p] == -1) {
            flag = true;
            break;
        }
        else {
            p = senior[p];
            cnt++;
        }
    }
    if (flag) cout << cnt;
    else cout << -1;
    return 0; 
}