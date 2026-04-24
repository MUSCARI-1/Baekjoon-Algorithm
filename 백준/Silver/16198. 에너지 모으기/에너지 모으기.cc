#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

vector<bool> check;
vector<int> num;
int high = 0;
int n;

void backtracking(int use, int pnt) {
    if (use == n - 2) {
        high = max(high, pnt);
        return;
    }
    for (int i = 1; i < n-1; i++) {
        if (!check[i]) continue;
        check[i] = false;
        int l = i - 1, r = i + 1;
        while (!check[l]) l--;
        while (!check[r]) r++;
        int nowPnt = pnt + num[l] * num[r];
        backtracking(use + 1, nowPnt);
        check[i] = true;
    }
}

int main() {
    FAST_IO
    cin >> n;
    check.resize(n, true);
    num.resize(n);
    for (int i = 0; i < n; i++) cin >> num[i];
    backtracking(0, 0);
    cout << high;
    return 0;
}