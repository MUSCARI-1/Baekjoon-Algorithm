#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;
long long INFINF = 10000000000000007;

int main() {
    FAST_IO
    int n, d;
    cin >> n >> d;
    vector<long long> height(300001, 0);
    int idx = -1;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        idx = max(idx, a);
        height[a]++;
    }
    long long cnt = 0;
    while (d--) {
        cnt += height[idx];
        height[idx-1] += height[idx];
        idx--;
        if (idx == 0) break;
    }
    cout << cnt;
    return 0;
}