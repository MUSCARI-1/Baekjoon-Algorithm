#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;

int main() {
    FAST_IO;
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++) {
        int imp;
        cin >> imp;
        v.push_back({imp, i});
    }
    if (n < k) {
        for (int i = 1; i <= n; i++)
            cout << i << endl;
        for (int i = 0; i < k - n; i++)
            cout << 0 << endl;
        for (int i = 1; i <= n; i++)
            cout << i << endl;
        return 0;
    }
    sort(v.begin(), v.end(), greater<>());
    vector<bool> check(51, false);
    for (int i = 0; i < k; i++) {
        int idx = v[i].second;
        check[idx] = true;
    }
    for (int i = 1; i <= n; i++)
        if (check[i]) cout << i << endl;
    for (int i = 1; i <= n; i++) {
        if (check[i]) cout << i << endl;
        else cout << 0 << endl;
    }
    return 0;
}