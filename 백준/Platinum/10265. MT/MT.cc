#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int n, k;
vector<int> draw, visit;
vector<pair<int, int>> group; // cycle, size

void dfs(int s) {
    int now = s;
    int cycle = 0, size = 0;
    while (visit[now] <= -1) {
        if (visit[now] == -1) {
            visit[now]--;
            now = draw[now];
            size++;
        }
        else if (visit[now] == -2) {
            visit[now]--;
            now = draw[now];
            cycle++;
        }
        else break;
    }
    if (visit[now] > -1) {
        int groupNum = visit[now];
        for (int i = 1; i <= n; i++) {
            if (visit[i] < -1) visit[i] = groupNum;
        }
        group[groupNum].second += size;
        return;
    }
    int num = group.size();
    for (int i = 1; i <= n; i++) {
        if (visit[i] < -1) visit[i] = num;
    }
    group.push_back({cycle, size});
}

int main() {
    FAST_IO
    cin >> n >> k;
    draw.resize(n+1);
    visit.resize(n+1, -1);
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        draw[i] = a;
    }
    for (int i = 1; i <= n; i++) {
        if (visit[i] != -1) continue;
        dfs(i);
    }
    vector<vector<bool>> dp(group.size() + 1);
    for (int i = 0; i <= group.size(); i++) {
        dp[i].resize(k + 1, false);
    }
    dp[0][0] = true;
    for (int i = 0; i < group.size(); i++) {
        for (int j = 0; j <= k; j++) {
            if (!dp[i][j]) continue;
            dp[i+1][j] = true;
            for (int able = j + group[i].first; able <= k && able - j <= group[i].second; able++){
                dp[i+1][able] = true;
            }
        }
    }
    int res = 0;
    for (int i = 0; i <= k; i++) {
        if (dp[group.size()][i]) res = i;
    }
    cout << res;
    return 0;
}