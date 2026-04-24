#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;

string s;
int n;

vector<vector<long long>> pascal(2001);

void comb () {
    for (int i = 0; i < 2001; i++)
        pascal[i].resize(2001, 1);
    for (int i = 2; i < 2001; i++) {
        for (int j = 1; j < i; j++)
            pascal[i][j] = (pascal[i-1][j-1] + pascal[i-1][j]) % INF;
    }
}

long long nowIdx (int idx) {
    int stk = 1;
    int ptr = idx + 1;
    bool flag = true;
    while (ptr < n) {
        if (s[ptr] == '>' && !flag) break;
        else if (s[ptr] == '<') {
            if (flag) flag = false;
            stk--;
            if (stk == 0) break;
        }
        else if (s[ptr] == '>' && flag) stk++;
        ptr++;
    }
    if (stk != 0) return 0;
    int L = idx, R = n - ptr - 1;
    return pascal[L+R][min(L,R)];
}

int main() {
    FAST_IO;
    comb();
    cin >> n >> s;
    int idx = 0;
    long long cnt = 0;
    while (idx < n) {
        if (s[idx] == '>') cnt += nowIdx(idx);
        idx++;
        cnt %= 1000000007;
    }
    cout << cnt << endl;
    return 0;
}