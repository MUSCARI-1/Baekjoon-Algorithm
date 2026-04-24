#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;
long long INFINF = 10000000000000007;

int main() {
    FAST_IO
    int n;
    cin >> n;
    vector<long double> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    long double cnt = v[n-1];
    for (int i = 0; i < n-1; i++) cnt += v[i] / 2;
    cout << cnt;
    return 0;
}