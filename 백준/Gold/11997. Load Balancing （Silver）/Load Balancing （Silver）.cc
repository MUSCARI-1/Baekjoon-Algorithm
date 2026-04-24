#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;
long long INFINF = 10000000000000007;

vector<pair<int, int>> dot;
int n;

void compress() {
    int now = dot[0].first, idx = 1;
    dot[0].first = idx;
    swap(dot[0].first, dot[0].second);
    for (int i = 1; i < n; i++) {
        if (dot[i].first == now) dot[i].first = idx;
        else {
            idx++;
            now = dot[i].first;
            dot[i].first = idx;
        }
        swap(dot[i].first, dot[i].second);
    }
    sort(dot.begin(), dot.end());
    now = dot[0].first, idx = 1;
    dot[0].first = idx;
    swap(dot[0].first, dot[0].second);
    for (int i = 1; i < n; i++) {
        if (dot[i].first == now) dot[i].first = idx;
        else {
            idx++;
            now = dot[i].first;
            dot[i].first = idx;
        }
        swap(dot[i].first, dot[i].second);
    }
    sort(dot.begin(), dot.end());
}

int main() {
    FAST_IO
    cin >> n;
    dot.resize(n);
    for (int i = 0; i < n; i++)
        cin >> dot[i].first >> dot[i].second;
    sort(dot.begin(), dot.end());
    compress();
    vector<vector<int>> prefix(1001);
    for (int i = 0; i < 1001; i++) prefix[i].resize(1001, 0);
    for (int i = 0; i < n; i++) {
        prefix[dot[i].first][dot[i].second]++;
    }
    for (int i = 1; i < 1001; i++) {
        for (int j = 1; j < 1001; j++) {
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] + prefix[i][j] - prefix[i-1][j-1];
        }
    }
    int res = INF;
    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < 1001; j++) {
            int high = 0;
            high = max(high, prefix[i][j]);
            high = max(high, prefix[i][1000] - prefix[i][j]);
            high = max(high, prefix[1000][j] - prefix[i][j]);
            high = max(high, prefix[1000][1000] - prefix[i][1000] - prefix[1000][j] + prefix[i][j]);
            res = min(high, res);
        }
    }
    cout << res;
    return 0;
}