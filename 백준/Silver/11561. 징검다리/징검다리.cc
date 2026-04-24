#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

long long solve() {
    long long n, m, left = 1, right = INF, res = 1;
    cin >> n;
    while (left <= right) {
        m = (left + right) / 2;
        long long leftEx = m * (m + 1);
        long long rightEx = 2 * n;
        if (leftEx > rightEx) {
            right = m - 1;
        }
        else {
            left = m + 1;
            res = m;
        }
    }
    return res;
}

int main(){
    FAST_IO;
    int t;
    cin >> t;
    while (t--) cout << solve() << endl;
    return 0;
}