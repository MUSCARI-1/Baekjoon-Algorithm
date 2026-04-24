#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int main() {
    FAST_IO;
    long double x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << fixed << setprecision(15);
    if (x1 == x2 && x2 == x3) {
        cout << -1.0 << endl;
        return 0;
    }
    long double slope1 = (y2 - y1) / (x2 - x1);
    long double slope2 = (y3 - y2) / (x3 - x2);
    long double slope3 = (y1 - y3) / (x1 - x3);
    if (slope1 == slope2 && slope2 == slope3) {
        cout << -1.0 << endl;
        return 0;
    }
    long double dist1, dist2, dist3;
    dist1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    dist2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    dist3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    long double res1, res2, res3;
    res1 = (dist1 + dist2) * 2;
    res2 = (dist2 + dist3) * 2;
    res3 = (dist1 + dist3) * 2;
    long double mini = min ({res1, res2, res3});
    long double maxi = max ({res1, res2, res3});
    cout << maxi - mini << endl;
    return 0;
}
