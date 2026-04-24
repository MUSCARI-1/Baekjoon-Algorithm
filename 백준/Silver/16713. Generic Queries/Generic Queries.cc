#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int main() {
    FAST_IO
    int n, q;
    cin >> n >> q;
    vector<int> v(n), prefix(n+1, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] ^ v[i-1];
    }
    int res = 0;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        res ^= prefix[b] ^ prefix[a-1];
    }
    cout << res;
    return 0;
}