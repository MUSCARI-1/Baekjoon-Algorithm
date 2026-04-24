#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, m;
    cin >> n;
    vector<int> v(n), prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        prefix[i + 1] = prefix[i] + v[i];
    }
    cin >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << "\n";
    }
    return 0;
}