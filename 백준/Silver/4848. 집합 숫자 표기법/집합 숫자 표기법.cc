#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

void recur(int a) {
    if (a == 0) {
        cout << "{}";
        return;
    }
    if (a == 1) {
        cout << "{{}}";
        return;
    }
    cout << '{';
    for (int i = 0; i < a; i++) {
        recur(i);
        if (i != a - 1) cout << ',';
    }
    cout << '}';
}

void solve() {
    string a, b;
    cin >> a >> b;
    int numA = 0, numB = 0, p1 = a.size() - 2, p2 = b.size() - 2;
    while (a[p1] == '}') {
        numA++;
        p1--;
    }
    while (b[p2] == '}') {
        numB++;
        p2--;
    }
    int c = numA + numB;
    recur(c);
    cout << endl;
}

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}