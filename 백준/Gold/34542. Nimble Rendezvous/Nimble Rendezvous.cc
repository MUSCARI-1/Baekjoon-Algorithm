#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;
int INFINF = 1100000000;
int minusINFINF = -1100000000;

int main() {
    FAST_IO;
    int a, b, dist, count = 1, move = 2, resCnt = 0;
    cin >> a >> b;
    dist = abs(b-a);
    while (dist % 2 == 0){
        if (count - dist / 2 > 0) break;
        move *= 2;
        count *= 2;
        resCnt++;
    }
    if (dist % 2 != 0) cout << -1 << endl;
    else cout << resCnt << " " << (count - dist / 2) << endl;
    return 0;
}

