#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

vector<vector<int>> alpha(26);

int binarySearch(int alphaIdx, int idx){
    int L = 0, R = alpha[alphaIdx].size() - 1;
    while (L <= R) {
        int mid = (L + R) / 2;
        int nowIdx = alpha[alphaIdx][mid];
        if (idx >= nowIdx) L = mid + 1;
        else R = mid - 1;
    }
    return L;
}

int main() {
    FAST_IO
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < t.size(); i++) {
        int idx = int(t[i]) - 97;
        alpha[idx].push_back(i);
    }
    vector<int> index(26,0);
    int idx = -1;
    int ptr = 0, cnt = 1;
    while (ptr < s.size()) {
        int idxAlpha = int(s[ptr]) - 97;
        if (alpha[idxAlpha].size() == 0) {
            cnt = -1;
            break;
        }
        int idxIter = binarySearch(idxAlpha, idx);
        if (idxIter >= alpha[idxAlpha].size()) {
            idx = -1;
            cnt++;
        }
        else {
            idx = alpha[idxAlpha][idxIter];
            ptr++;
        }
    }
    cout << cnt << endl;
    return 0;
}