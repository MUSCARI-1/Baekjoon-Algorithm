#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 2000000000;
long double INFINF = 987654321987654;

int n, m, res = 0;
vector<vector<int>> snow;
vector<int> dpI;
vector<int> dpJ;

bool check() {
    for (int i = 0; i < n; i++)
        if (dpI[i] != 0) return false;
    for (int j = 0; j < m; j++)
        if (dpJ[j] != 0) return false;
    return true;
}

void test() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << snow[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++) cout << dpI[i] << "  ";
    cout << endl;
    for (int i = 0; i < m; i++) cout << dpJ[i] << "  ";
    cout << endl;
}

void del(int miniI, int miniJ) {
    if (miniI == -1) {
        for (int i = 0; i < n; i++) {
            dpI[i] -= snow[i][miniJ];
            snow[i][miniJ] = 0;
        }
        dpJ[miniJ] = 0;
    }
    else {
        for (int i = 0; i < m; i++) {
            dpJ[i] -= snow[miniI][i];
            snow[miniI][i] = 0;
        }
        dpI[miniI] = 0;
    }
}

void solve() {
    int minirow = INF, miniI = -1, miniJ = -1;
    for (int i = 0; i < n; i++) {
        if (minirow > dpI[i] && dpI[i] != 0) {
            minirow = dpI[i];
            miniI = i;
            miniJ = -1;
        }
    }
    for (int j = 0; j < m; j++) {
        if (minirow > dpJ[j] && dpJ[j] != 0) {
            minirow = dpJ[j];
            miniJ = j;
            miniI = -1;
        }
    }
    res = max(minirow, res);
    del(miniI, miniJ);
}

void del_check() {
    for (int i = 0; i < n; i++)
        if (dpI[i] <= res) del(i, -1);
    for (int j = 0; j < m; j++) {
        if (dpJ[j] <= res) del(-1, j);
    }
}

void update() {
    for (int i = 0; i < n; i++) {
        if(dpI[i] == 0) continue;
        int cnt = 0;
        for (int j = 0; j < m; j++) cnt += snow[i][j];
        dpI[i] = cnt;
    }
    for (int j = 0; j < m; j++) {
        if (dpJ[j] == 0) continue;
        int cnt = 0;
        for (int i = 0; i < n; i++) cnt += snow[i][j];
        dpJ[j] = cnt;
    }
}

int main() {
    FAST_IO;
    cin >> n >> m;
    snow.resize(n);
    dpI.resize(n,INF);
    dpJ.resize(m,INF);
    for (int i = 0; i < n; i++) {
        snow[i].resize(m);
        for (int j = 0; j < m; j++) {
            cin >> snow[i][j];
        }
    }
    update();
    while (!check()) {
        solve();
    }
    cout << res << endl;
    return 0;
}

