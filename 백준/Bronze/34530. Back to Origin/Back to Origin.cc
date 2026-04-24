#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int main() {
    FAST_IO;
    int n, cnt = 1;
    cin >> n;
    int now = n;
    while (now != 360) {
        now += n;
        cnt++;
        if (now > 360) now -= 360;
        if (cnt > 500) break;
    }
    if (cnt > 500) cout << -1;
    else cout << cnt;
    return 0;
}

