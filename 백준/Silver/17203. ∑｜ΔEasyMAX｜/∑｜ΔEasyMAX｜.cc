#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, m;
    cin >> n >> m;
    vector<int> v(n), absolute(n, 0), prefix(n + 1, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 1; i < n; i++)
        absolute[i] = abs(v[i] - v[i-1]);
    for (int i = 1; i <= n; i++)
        prefix[i] = prefix[i-1] + absolute[i-1];
    while (m--) {
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a] << "\n";
    }
    return 0;
}