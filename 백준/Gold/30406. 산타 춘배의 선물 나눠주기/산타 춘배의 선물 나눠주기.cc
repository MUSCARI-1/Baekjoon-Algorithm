#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n;
    cin >> n;
    int zero = 0, one = 0, two = 0, three = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 0) zero++;
        else if (a == 1) one++;
        else if (a == 2) two++;
        else three++;
    }
    int cnt = 0;
    while (zero != 0 && three != 0) {
        zero--;
        three--;
        cnt += 3;
    }
    while (one != 0 && two != 0) {
        one--;
        two--;
        cnt += 3;
    }
    if (zero != 0) {
        cnt += min(zero, one);
        cnt += min(zero, two) * 2;
    }
    else {
        cnt += min(three, one) * 2;
        cnt += min(three, two);
    }
    cout << cnt;
    return 0;
}