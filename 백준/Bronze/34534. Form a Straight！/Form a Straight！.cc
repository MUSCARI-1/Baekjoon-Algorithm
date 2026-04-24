#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int main() {
    FAST_IO;
    int res = INF;
    vector<bool> card(10, false);
    for (int i = 0; i < 5; i++) {
        int c;
        cin >> c;
        card[c] = true;
    }
    for (int i = 1; i <= 5; i++) {
        int cnt = 0;
        for (int j = i; j < i+5; j++) {
            if (!card[j]) cnt++;
        }
        res = min(res, cnt);
    }
    cout << res;
    return 0;
}

