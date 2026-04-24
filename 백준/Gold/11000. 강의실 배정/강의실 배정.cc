#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long INF = 1000000007;

int main() {
    FAST_IO
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    priority_queue<int> pq;
    pq.push(-v[0].second);
    for (int i = 1; i < n; i++) {
        int st = -pq.top();
        if (v[i].first < st)
            pq.push(-v[i].second);
        else {
            pq.pop();
            pq.push(-v[i].second);
        }
    }
    cout << pq.size() << endl;
    return 0;
}