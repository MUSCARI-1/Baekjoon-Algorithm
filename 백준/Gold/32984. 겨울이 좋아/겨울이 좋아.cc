#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF = 1000000007;

int n;

vector<long long> tree;

int solve() {

    int left = 1, right = INF;

    while (left != right) {

        int mid = (left + right) / 2;

        long long cnt = 0;

        for (int i = 0; i < n; i++)

            if (tree[i] - mid > 0) cnt += tree[i] - mid;

        if (cnt <= mid) right = mid;

        else left = mid + 1;

    }

    return left;

}

int main() {

    FAST_IO

    cin >> n;

    tree.resize(n);

    for (int i = 0; i < n; i++) cin >> tree[i];

    for (int i = 0; i < n; i++) {

        int mod;

        cin >> mod;

        tree[i] = (tree[i] - 1) / mod + 1;

    }

    cout << solve();

    return 0;

}