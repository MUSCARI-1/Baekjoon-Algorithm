#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long INF = 1000000007;

int main() {
    FAST_IO
    int n;
    long long cnt = 0;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++) cin >> height[i];
    int now = 1;
    for (int i = 0; i < n; i++) {
        if (height[i] >= now)
            height[i] = now++;
        else now = height[i] + 1;
    }
    now = 1;
    for (int i = n - 1; i >= 0; i--) {
        if (height[i] >= now)
            height[i] = now++;
        else now = height[i] + 1;
    }
    for (int i = 0; i < n; i++) cnt += height[i];
    cout << cnt << endl;
    return 0;
}