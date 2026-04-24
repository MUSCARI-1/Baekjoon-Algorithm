#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long INF = 1000000007;

vector<int> v;

int solve() {
    int n;
    cin >> n;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            for (int k = 0; k < v.size(); k++) {
                int cnt = v[i] + v[j] + v[k];
                if (cnt == n) return 1;
            }
        }
    }
    return 0;
}

void fill() {
    int cnt = 1;
    int idx = 2;
    while (cnt < 1000) {
        v.push_back(cnt);
        cnt += idx++;
    }
}

int main() {
    FAST_IO
    int t;
    cin >> t;
    fill();
    while (t--) cout << solve() << endl;
    return 0;
}