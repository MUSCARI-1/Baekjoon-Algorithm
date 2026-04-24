#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;

int n, m, r;
vector<vector<int>> node;
vector<pair<long long, long long>> res; // depth, visited
vector<int> idx;

void dfs() {
    int visit = 1;
    stack<int> s;
    s.push(r);
    res[r].first = 0;
    res[r].second = visit++;
    while (s.size() != 0) {
        int now = s.top();
        bool flag = false;
        for (int i = idx[now]; i < node[now].size(); i++) {
            int next = node[now][i];
            if (res[next].second == 0) {
                res[next].first = s.size();
                s.push(next);
                res[next].second = visit++;
                flag = true;
                idx[now] = i + 1;
                break;
            }
        }
        if (!flag) s.pop();
    }
}

int main() {
    FAST_IO
    cin >> n >> m >> r;
    node.resize(n + 1);
    res.resize(n + 1, {-1, 0});
    idx.resize(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        node[u].push_back(v);
        node[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
        sort(node[i].begin(), node[i].end());
    dfs();
    long long cnt = 0;
    for (int i = 1; i <= n; i++)
        cnt += res[i].first * res[i].second;
    cout << cnt;
    return 0;
}