#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int f, s, g, u, d; // 총 f층, 시작 s층, 목적지 g층, up, down
    cin >> f >> s >> g >> u >> d;
    vector<bool> check(f + 1, false);
    queue<int> que;
    que.push(s);
    int time = 0;
    bool flag = false;
    while (que.size() != 0) {
        int turn = que.size();
        while (turn--) {
            int now = que.front();
            que.pop();
            if (check[now]) continue;
            check[now] = true;
            if (now == g) {
                flag = true;
                break;
            }
                int up = now + u, down = now - d;
            if (up <= f) que.push(up);
            if (down > 0) que.push(down);
        }
        if (flag) break;
        time++;
    }
    if (flag) cout << time;
    else cout << "use the stairs";
    return 0;
}