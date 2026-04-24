#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    set<string> check;
    string first = "";
    for (int i = 0; i < 9; i++) {
        char a;
        cin >> a;
        first += a;
    }
    queue<pair<string, int>> que;
    que.push({first, 0});
    while (que.size() != 0) {
        string arr = que.front().first;
        int cnt = que.front().second;
        que.pop();
        if (check.find(arr) != check.end()) continue;
        check.insert(arr);
        if (arr == "123456780") {
            cout << cnt;
            return 0;
        }
        int idxZero;
        for (int i = 0; i < 9; i++)
            if (arr[i] == '0') idxZero = i;
        if (idxZero >= 3) {
            string next = arr;
            swap(next[idxZero], next[idxZero - 3]);
            que.push({next, cnt + 1});
        }
        if (idxZero <= 5) {
            string next = arr;
            swap(next[idxZero], next[idxZero + 3]);
            que.push({next, cnt + 1});
        }
        if (idxZero % 3 != 0) {
            string next = arr;
            swap(next[idxZero], next[idxZero - 1]);
            que.push({next, cnt + 1});
        }
        if (idxZero % 3 != 2) {
            string next = arr;
            swap(next[idxZero], next[idxZero + 1]);
            que.push({next, cnt + 1});
        }
    }
    cout << -1;
    return 0;
}