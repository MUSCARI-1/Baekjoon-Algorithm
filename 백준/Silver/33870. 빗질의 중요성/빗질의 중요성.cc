#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int main() {
    FAST_IO;
    int n, m, cnt = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<int> now = v;
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        num--;
        for (int j = 0; j < n; j++) {
            if (now[j] == -1) continue;
            now[j]--;
            if (now[j] <= -5 && j != num) now[j] = -1;
        }
        if (now[num] == -1) now[num] = -5;
        else now[num] = v[num];
    }
    for (int i = 0; i < n; i++)
        if (now[i] <= 0) cnt++;
    cout << cnt << endl;
    return 0;
}