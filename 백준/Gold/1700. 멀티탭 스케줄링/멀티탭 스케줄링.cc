#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int n, k;
vector<int> v;
int connect = 0, cnt = 0;
vector<bool> flug(101, false);

int findIdx(int nowIdx, int num) {
    int last = INF;
    for (int i = nowIdx; i < k; i++) {
        if (num == v[i]) {
            last = i;
            break;
        }
    }
    return last;
}

int main() {
    FAST_IO
    cin >> n >> k;
    v.resize(k);
    for (int i = 0; i < k; i++) cin >> v[i];
    for (int i = 0; i < k; i++) {
        if (flug[v[i]]) continue;
        if (connect < n) connect++;
        else {
            int lastNum = -1, lastIdx = -1;
            for (int j = 0; j < 101; j++) {
                int find = findIdx(i, j);
                if (flug[j] && find > lastIdx) {
                    lastNum = j;
                    lastIdx = find;
                }
            }
            flug[lastNum] = false;
            cnt++;
        }
        flug[v[i]] = true;
    }
    cout << cnt << endl;
    return 0;
}