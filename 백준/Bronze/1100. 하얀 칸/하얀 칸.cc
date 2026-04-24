#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    vector<string> v(8);
    for (int i = 0; i < 8; i++) cin >> v[i];
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0 && v[i][j] == 'F') cnt++;
        }
    }
    cout << cnt;
    return 0;
}