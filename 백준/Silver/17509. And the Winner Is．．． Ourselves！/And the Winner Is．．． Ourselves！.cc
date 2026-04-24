#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long INF = 1000000007;

int main() {
    FAST_IO
    vector<int> v(11);
    int penalty = 0;
    for (int i = 0; i < 11; i++) {
        int p;
        cin >> v[i] >> p;
        penalty += p * 20;
    }
    sort(v.begin(), v.end());
    int cnt = 0, time = 0;
    for (int i = 0; i < 11; i++) {
        time += v[i];
        cnt += time;
    }
    cout << cnt + penalty << endl;
    return 0;
}