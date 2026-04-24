#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

vector<int> v;

bool solve(int n, int ptr) {
    int now = n;
    vector<int> num;
    do {
        num.push_back(now % 10);
        now /= 10;
    }while (now != 0);
    for (int i = 0; int(num.size() - i - 1) >= 0; i++) {
        if (i + ptr == v.size()) return false;
        if (num[int(num.size() - i - 1)] != v[i + ptr]) return false;
    }
    return true;
}

int main() {
    FAST_IO;
    int n, cnt = 0;
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    while (true) {
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (solve(cnt, i)) flag = true;
        }
        if (!flag) break;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}


