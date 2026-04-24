#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    long long length, width, height, n;
    cin >> length >> width >> height >> n;
    vector<pair<int, int>> box;
    vector<long long> cube(20, 0);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        cube[a] = b;
    }
    long long res = 0, minus = 0;
    long long total = length * width * height;
    for (int i = 19; i >= 0; i--) {
        minus *= 8;
        long long size = pow(2, i);
        long long nowCnt = (length / size) * (width / size) * (height / size);
        nowCnt = min(nowCnt - minus, cube[i]);
        minus += nowCnt;
        res += nowCnt;
    }
    if (minus != total) cout << -1;
    else cout << res;
    return 0;
}