#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

vector<int> p;

int find(int n) {
    if (p[n] < 0) return n;
    p[n] = find(p[n]);
    return p[n];
}

void merge(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return;
    p[a] += p[b];
    p[b] = a;
}

int main() {
    FAST_IO
    int n, m;
    cin >> n >> m;
    p.resize(n+1, -1);
    long long res = n;
    while (m--) {
        int a, b;
        cin >> a >> b;
        int rootA = find(a), rootB = find(b);
        if (rootA == rootB) cout << res << "\n";
        else {
            long long A = abs(p[rootA]);
            long long B = abs(p[rootB]);
            long long C = A + B;
            res -= A * (A - 1) / 2 + B * (B - 1) / 2;
            res += C * (C - 1) / 2;
            merge(a, b);
            cout << res << "\n";
        }
    }
    return 0;
}