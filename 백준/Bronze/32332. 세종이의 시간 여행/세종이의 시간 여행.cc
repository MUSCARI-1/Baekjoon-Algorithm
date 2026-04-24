#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    cout << fixed;
    cout << setprecision(3);
    int y1, y2, y3, m1, m2, m3, d1, d2, d3;
    vector<float> v(4);
    cin >> y1 >> m1 >> d1 >> v[0] >> v[1];
    cin >> y2 >> m2 >> d2 >> v[2] >> v[3];
    y3 = y1 * 2 - y2;
    m3 = m1 * 2 - m2;
    d3 = d1 * 2 - d2;
    while (d3 <= 0) {
        d3 += 30;
        m3--;
    }
    while (d3 > 30) {
        d3 -= 30;
        m3++;
    }
    while (m3 <= 0) {
        m3 += 12;
        y3--;
    }
    while (m3 > 12) {
        m3 -= 12;
        y3++;
    }
    cout << y3 << " " << m3 << " " << d3 << " " << v[0] * 2 - v[2] << " " << v[1] * 2 - v[3];
    return 0;
}