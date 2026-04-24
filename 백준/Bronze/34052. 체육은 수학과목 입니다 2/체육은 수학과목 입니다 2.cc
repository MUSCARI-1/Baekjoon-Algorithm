#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int main() {
    FAST_IO;
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        int now;
        cin >> now;
        cnt += now;
    }
    cnt += 300;
    if (cnt <= 1800) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

