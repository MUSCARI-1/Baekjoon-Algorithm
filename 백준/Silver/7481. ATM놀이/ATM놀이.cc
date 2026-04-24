#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;

void solve() {
    int a, b, s;
    cin >> a >> b >> s;
    set<int> mod;
    bool flag = false;
    if (a < b) {
        swap(a, b);
        flag = true;
    }
    int cntA = 0, cntB = 0, nowS = s;
    while (true) {
        if (nowS % a == 0) {
            cntA += nowS / a;
            break;
        }
        else {
            int search = nowS % a;
            if (nowS < 0 || mod.find(search) != mod.end()) {
                cout << "Impossible" << endl;
                return;
            }
            mod.insert(search);
            nowS -= b;
            cntB++;
        }
    }
    if (flag) swap(cntA, cntB);
    cout << cntA << " " << cntB << endl;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}