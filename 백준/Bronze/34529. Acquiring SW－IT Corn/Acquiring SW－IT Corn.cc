#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int main() {
    FAST_IO;
    int a, b, c, x, y, z, cnt = 0;
    cin >> a >> b >> c >> x >> y >> z;
    cnt += (x / 100) * a;
    cnt += (y / 50) * b;
    cnt += (z / 20) * c;
    cout << cnt;
    return 0;
}

