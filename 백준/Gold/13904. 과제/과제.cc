#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n;
    cin >> n;
    vector<pair<int, int>> task;
    vector<bool> check(n, false);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        task.push_back({a, b});
    }
    sort(task.begin(), task.end());
    priority_queue<int> score;
    for (int i = 0; i < n; i++) {
        score.push(-task[i].second);
        if (task[i].first < score.size()) score.pop();
    }
    int res = 0;
    while (score.size() != 0) {
        res += -score.top();
        score.pop();
    }
    cout << res;
    return 0;
}