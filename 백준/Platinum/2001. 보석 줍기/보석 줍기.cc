#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;

int n, m, k, res = 0;
vector<vector<bool>> jem(101);
map<int, int> island;
vector<vector<pair<int, int>>> bridge(101); // 정점, 보석 최대치
queue<pair<int, int>> q; // 정점, 보석 위치

// 지우는 경우 : bridge 가중치 < 보석 개수, 이미 똑같은 보석 들고 왔던 경우
// 보석을 담는 것도 다른 경우로 취급
void solve() { // 이번 점에 방문한 순간부터의 기능
    int nowIdx = q.front().first;
    int nowCheck = q.front().second;
    int cnt = __builtin_popcount(nowCheck);
    q.pop();
    if (jem[nowIdx][nowCheck]) return;
    jem[nowIdx][nowCheck] = true;
    if (nowIdx == 1) res = max(res, cnt);
    int jemIdx = island[nowIdx];
    if (jemIdx != 0 && ((1 << jemIdx - 1) & nowCheck) == 0) {
        nowCheck |= (1 << jemIdx - 1);
        q.push({nowIdx, nowCheck});
        nowCheck &= ~(1 << jemIdx - 1);
    }
    for (int i = 0; i < bridge[nowIdx].size(); i++) {
        int nextIdx = bridge[nowIdx][i].first;
        if (cnt > bridge[nowIdx][i].second) continue;
        q.push({nextIdx, nowCheck});
    }
}

int main() {
    FAST_IO
    cin >> n >> m >> k;
    for (int i = 1; i <= k; i++) {
        int idx;
        cin >> idx;
        island[idx] = i;
    }
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        bridge[a].push_back({b, c});
        bridge[b].push_back({a, c});
    }
    for (int i = 0; i < 101; i++) jem[i].resize(16385, false);
    q.push({1, 0});
    while (q.size() != 0) solve();
    cout << res;
    return 0;
}