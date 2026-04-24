#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, k;
    cin >> n >> k;
    vector<char> circle(n, '?');
    int idx = 0;
    bool check = true;
    vector<bool> use(26, false);
    while (k--) {
        int back;
        char alpha;
        cin >> back >> alpha;
        idx = (idx - back + n * 100) % n;
        if (circle[idx] != '?') {
            if (circle[idx] != alpha) check = false;
        }
        else {
            if (use[alpha - 65]) check = false;
            use[alpha - 65] = true;
            circle[idx] = alpha;
        }
    }
    if (!check) cout << '!';
    else {
        for (int i = 0; i < n; i++) {
            int now = (idx + i) % n;
            cout << circle[now];
        }
    }
    return 0;
}