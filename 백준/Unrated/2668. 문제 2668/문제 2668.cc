#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

vector<int> num;
vector<bool> res;
int n, cnt = 0;

void solve(int start) {
    vector<int> check(n + 1, 0);
    int now = start;
    while (check[now] < 2) {
        if (check[now] == 0) {
            check[now]++;
            now = num[now];
        }
        else {
            if (!res[now]) {
                res[now] = true;
                cnt++;
            }
            check[now]++;
            now = num[now];
        }
    }
}

int main() {
    FAST_IO
    cin >> n;
    num.resize(n + 1);
    res.resize(n + 1, false);
    for (int i = 1; i <= n; i++) cin >> num[i];
    for (int i = 1; i <= n; i++) solve(i);
    cout << cnt << endl;
    for (int i = 1; i <= n; i++)
        if (res[i]) cout << i << endl;
    return 0;
}