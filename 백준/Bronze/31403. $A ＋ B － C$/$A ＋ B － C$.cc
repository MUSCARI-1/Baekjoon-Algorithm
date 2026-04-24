#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b - c << endl;
    int s = 0;
    if (b < 10) s = 1;
    else if (b < 100) s = 2;
    else if (b < 1000) s = 3;
    else s = 4;
    while (s--) a *= 10;
    cout << a + b - c;
    return 0;
}