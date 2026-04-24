#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n;
    cin >> n;
    if (n == 2) cout << 1;
    else if (n == 3) cout << 3;
    else cout << 3 * n - 4;
    return 0;
}