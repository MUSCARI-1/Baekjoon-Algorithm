#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

long long INF = 1000000007;

int n;

vector<int> num;

int pal (int L, int R) {

    int left = L - 1, right = R + 1;

    int cnt = R - L + 1;

    int now = num[L];

    while (left >= 0 && right < n) {

        if (num[left] != num[right]) break;

        if (num[left] >= now) break;

        now = num[left];

        left--;

        right++;

        cnt += 2;

    }

    return cnt;

}

int main() {

    FAST_IO

    int cnt = 1;

    cin >> n;

    num.resize(n);

    for (int i = 0; i < n; i++) cin >> num[i];

    for (int i = 1; i < n; i++) {

        if (num[i] > num[i-1]) cnt = max(cnt, pal(i, i));

        else if (num[i] == num[i-1]) cnt = max(cnt, pal(i-1, i));

    }

    cout << cnt;

    return 0;

}