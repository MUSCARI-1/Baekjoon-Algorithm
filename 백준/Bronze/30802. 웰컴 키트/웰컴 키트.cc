#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    long long n, s, m, l, xl, xxl, xxxl, t, p;
    cin >> n >> s >> m >> l >> xl >> xxl >> xxxl >> t >> p;
    long long cnt = 0;
    cnt += s != 0 ? (s-1)/t+1 : 0;
    cnt += m != 0 ? (m-1)/t+1 : 0;
    cnt += l != 0 ? (l-1)/t+1 : 0;
    cnt += xl != 0 ? (xl-1)/t+1 : 0;
    cnt += xxl != 0 ? (xxl-1)/t+1 : 0;
    cnt += xxxl != 0 ? (xxxl-1)/t+1 : 0;
    cout << cnt << endl;
    cout << n / p << " " << n % p;
    return 0; 
}