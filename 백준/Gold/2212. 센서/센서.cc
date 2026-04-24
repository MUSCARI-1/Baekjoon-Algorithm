#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, k;
    cin >> n >> k;
    vector<int> sensor(n), dist(n-1);
    for (int i = 0; i < n; i++) cin >> sensor[i];
    sort(sensor.begin(), sensor.end());
    for (int i = 0; i < n - 1; i++) {
        dist[i] = sensor[i+1] - sensor[i];
    }
    sort(dist.begin(), dist.end(), greater<>());
    long long cnt = 0;
    for (int i = k - 1; i < n - 1; i++)
        cnt += dist[i];
    cout << cnt << endl;
    return 0;
}