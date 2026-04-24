#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

void solve() {
    int a, b;
    cin >> a >> b;
    a /= b;
    cout << a * a << endl;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}