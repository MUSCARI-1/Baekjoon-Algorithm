#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int n;
bool flag = false;
vector<string> hjs(3);
char idx[3] = {'H', 'J', 'S'};
vector<int> arrow(3, -1);

void solve() {
    if (hjs[0] == hjs[1] || hjs[0] == hjs[2] || hjs[1] == hjs[2]) return;
    for (int i = 0; i < n; i++) {
        if (hjs[0][i] != hjs[1][i]) {
            int a, b;
            for (int j = 0; j < 3; j++) if (hjs[0][i] == idx[j]) a = j;
            for (int j = 0; j < 3; j++) if (hjs[1][i] == idx[j]) b = j;
            arrow[a] = b;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (hjs[1][i] != hjs[2][i]) {
            int a, b;
            for (int j = 0; j < 3; j++) if (hjs[1][i] == idx[j]) a = j;
            for (int j = 0; j < 3; j++) if (hjs[2][i] == idx[j]) b = j;
            if (arrow[b] != -1 && arrow[b] == a) return;
            arrow[a] = b;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (hjs[0][i] != hjs[2][i]) {
            int a, b;
            for (int j = 0; j < 3; j++) if (hjs[0][i] == idx[j]) a = j;
            for (int j = 0; j < 3; j++) if (hjs[2][i] == idx[j]) b = j;
            if (arrow[b] != -1 && arrow[b] == a) return;
            break;

        }
    }
    flag = true;
}

int main() {
    FAST_IO;
    cin >> n;
    for (int i = 0; i < 3; i++) cin >> hjs[i];
    solve();
    if (flag) cout << "HJS! HJS! HJS!" << endl;
    else cout << "Hmm..." << endl;
    return 0;
}


