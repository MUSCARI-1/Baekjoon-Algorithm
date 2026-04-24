#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int solve(int x1, int y1, int x2, int y2, int x3, int y3) {
    int x, y, t1, t2, t3, dist1, dist2, dist3, cnt1 = 0,
    cnt2 = 0, cnt3 = 0, res = INF;
    cin >> x >> y >> t1 >> t2 >> t3;
    dist1 = abs(x - x1) + abs(y - y1);
    dist2 = abs(x - x2) + abs(y - y2);
    dist3 = abs(x - x3) + abs(y - y3);
    cnt1 = dist1 / t1;
    cnt2 = dist2 / t2;
    cnt3 = dist3 / t3;
    if (dist1 % t1 != 0) cnt1++;
    if (dist2 % t2 != 0) cnt2++;
    if (dist3 % t3 != 0) cnt3++;
    cnt1 *= t1;
    cnt2 *= t2;
    cnt3 *= t3;
    return min({cnt1, cnt2, cnt3});
}

int main() {
    FAST_IO;
    int x1, y1, x2, y2, x3, y3, q;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> q;
    while(q--) cout << solve(x1, y1, x2, y2, x3, y3) << "\n";
    return 0;
}


