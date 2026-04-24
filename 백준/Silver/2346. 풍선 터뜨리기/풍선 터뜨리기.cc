#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF = 1000000007;

int main() {

    FAST_IO

    int n;

    cin >> n;

    vector<int> v(n), num(n);

    queue<int> q;

    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 1; i <= n; i++) num[i-1] = i;

    int now = 0, move = 0;

    while (v.size() != 0) {

        now = (now + v.size() * 1000) % v.size();

        q.push(num[now]);

        move = v[now];

        v.erase(v.begin() + now);

        num.erase(num.begin() + now);

        if (move < 0) now += move;

        else now += move - 1;

    }

    while (q.size() != 0) {

        cout << q.front() << " ";

        q.pop();

    }

    return 0;

}