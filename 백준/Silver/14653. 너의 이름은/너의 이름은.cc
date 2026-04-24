#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n, k, q;
    cin >> n >> k >> q;
    vector<pair<int, char>> kakao;
    for (int i = 0; i < k; i++) {
        int num;
        char alpha;
        cin >> num >> alpha;
        kakao.push_back({num, alpha});
    }
    vector<bool> check(n, true);
    int qNum = kakao[q-1].first;
    for (int i = k - 1; i >= 0; i--) {
        int nowAlpha = kakao[i].second - 65;
        if (qNum > kakao[i].first) break;
        check[nowAlpha] = false;
    }
    check[0] = false;
    bool c = true;
    for (int i = 0; i < n; i++) if (check[i]) c = false;
    if (c || qNum == 0) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (check[i]) {
            char noRead = i + 65;
            cout << noRead << " ";
        }
    }
    return 0;
}