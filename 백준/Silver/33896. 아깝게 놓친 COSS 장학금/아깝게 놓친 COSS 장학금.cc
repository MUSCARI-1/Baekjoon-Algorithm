#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

bool compare(tuple<int, int, string> p1, tuple<int, int, string> p2) {
    if (get<0>(p1) == get<0>(p2)) {
        if (get<1>(p1) == get<1>(p2))
            return get<2>(p1) < get<2>(p2);
        return get<1>(p1) < get<1>(p2);
    }
    return get<0>(p1) > get<0>(p2);
}

int main() {
    FAST_IO;
    int n;
    cin >> n;
    vector<tuple<int, int, string>> res;
    while (n--) {
        string s;
        cin >> s;
        int score, risk, cost, coss;
        cin >> score >> risk >> cost;
        coss = (score * score * score) / (cost * (risk + 1));
        res.push_back({coss, cost, s});
    }
    sort(res.begin(), res.end(), compare);
    cout << get<2>(res[1]) << endl;
    return 0;
}