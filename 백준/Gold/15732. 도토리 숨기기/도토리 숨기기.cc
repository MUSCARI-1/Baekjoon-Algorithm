#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int n, k, d;
vector<tuple<int, int, int>> info;

int solve() {
    int left = 0, right = 1000000;
    while (left < right) {
        int mid = (left + right) / 2;
        bool over = false;
        int cnt = 0;
        for (int i = 0; i < k; i++) {
            int firstIdx = get<0>(info[i]), lastIdx = min(get<1>(info[i]), mid);
            int interval = get<2>(info[i]);
            if (firstIdx > mid) continue;
            int plus = (lastIdx - firstIdx) / interval + 1;
            cnt += plus;
            if (cnt >= d) {
                over = true;
                break;
            }
        }
        if (over) right = mid;
        else left = mid + 1;
    }
    return left;
}

int main() {
    FAST_IO
    cin >> n >> k >> d;
    for (int i = 0; i < k; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        info.push_back({a, b, c});
    }
    cout << solve();
    return 0;
}