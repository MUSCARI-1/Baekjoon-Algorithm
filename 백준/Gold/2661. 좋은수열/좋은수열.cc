#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int n;
vector<int> num, res;
bool flag = false;

bool check() {
    bool c = true;
    int size = 1;
    while (size * 2 <= num.size()) {
        for (int i = 0; i <= num.size() - size*2; i++) {
            bool equal = true;
            for (int j = 0; j < size; j++) {
                if (num[i + j] != num[i + size + j]) equal = false;
            }
            if (equal) c = false;
        }
        size++;
    }
    return c;
}

void backtracking() {
    if (flag) return;
    bool c = check();
    if (!c) return;
    if (num.size() == n) {
        res = num;
        flag = true;
        return;
    }
    else {
        for (int i = 1; i <= 3; i++) {
            num.push_back(i);
            backtracking();
            num.pop_back();
        }
    }
}

int main() {
    FAST_IO
    cin >> n;
    backtracking();
    for (int i = 0; i < n; i++) cout << res[i];
    return 0;
}