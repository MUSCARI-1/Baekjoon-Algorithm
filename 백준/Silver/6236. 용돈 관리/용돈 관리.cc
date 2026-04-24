#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;

int n, m;
vector<int> cost;

int solve(int L) {
    int left = L, right = INF;
    while (left < right) {
        int mid = (left + right) / 2;
        int cnt = 1, now = mid;
        for (int i = 0; i < n; i++) {
            if (now - cost[i] < 0) {
                cnt++;
                now = mid;
            }
            now -= cost[i];
        }
        if (cnt > m) left = mid + 1;
        else right = mid;
    }
    return left;
}

int main() {
    FAST_IO
    cin >> n >> m;
    cost.resize(n);
    int left = 0;
    for (int i = 0; i < n; i++) cin >> cost[i];
    for (int i = 0; i < n; i++) left = max(left, cost[i]);
    cout << solve(left);
    return 0;
}