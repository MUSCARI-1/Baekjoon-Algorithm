#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

vector<int> num = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
map<char, int> idx;
int n, res = -1;
vector<string> alpha;

int caculation() {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int now = 0;
        for (int j = 0; j < alpha[i].size(); j++) {
            now *= 10;
            int nowIdx = idx[alpha[i][j]];
            now += num[nowIdx];
        }
        cnt += now;
    }
    return cnt;
}

int main() {
    FAST_IO
    cin >> n;
    alpha.resize(n);
    int size = 0;
    for (int i = 0; i < n; i++) {
        cin >> alpha[i];
        for (int j = 0; j < alpha[i].size(); j++) {
            bool flag = false;
            for (int k = 0; k < idx.size(); k++)
                if (idx.find(alpha[i][j]) != idx.end()) flag = true;
            if (!flag) idx[alpha[i][j]] = size++;
        }
    }
    do {
        res = max(caculation(), res);
    } while (next_permutation(num.begin(), num.end()));
    cout << res;
    return 0;
}