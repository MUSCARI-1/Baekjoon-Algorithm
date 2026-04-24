#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, m;
    cin >> n >> m;
    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++) {
        int now = 0, top = 0;
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            if (c == '.') top = max(++now, top);
            else now = 0;
        }
        string s;
        cin >> s;
        v.push_back({top, s});
    }
    vector<bool> check(201, true);
    int res = 0;
    for (int i = 0; i < n; i++)
        if (check[v[i].first]) {
            check[v[i].first] = false;
            res++;
        }
    cout << res << endl;
    for (int i = 0; i < n; i++) cout << v[i].first << " " << v[i].second << endl;
    return 0;
}