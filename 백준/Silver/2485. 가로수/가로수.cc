#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int n;

int solve(vector<int> v, int gcd) {
    int cnt = 0, first = v[0];
    for (int i = first + gcd; i <= v[n-1]; i += gcd) cnt++;
    cnt -= n-1;
    return cnt;
}

int Euclidean(int a, int b)
{
    int r = a % b;
    if (r == 0) {
        return b;
    }
    return Euclidean(b, r);
}

int main() {
    FAST_IO;
    int gcd = INF;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    gcd = Euclidean(v[1]-v[0], v[2]-v[1]);
    for (int i = 2; i < n-1; i++) {
        gcd = Euclidean(gcd, v[i+1] - v[i]);
    }
    cout << solve(v, gcd) << endl;
    return 0;
}

