#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int main() {
    FAST_IO;
    int n;
    cin >> n;
    vector<long long> nowTree(n);
    vector<pair<int, int>> cnt;
    for (int i = 0; i < n; i++) cin >> nowTree[i];
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        cnt.push_back({k,i});
    }
    sort(cnt.begin(), cnt.end());
    long long res = 0;
    for (int i = 0; i < n; i++) {
        res += nowTree[cnt[i].second] + cnt[i].first * i;
    }
    cout << res << endl;
    return 0;
}