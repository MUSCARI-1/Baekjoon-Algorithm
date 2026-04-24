#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long INF = 1000000007;

int main() {
    FAST_IO
    int n, cnt = 0;
    cin >> n;
    vector<bool> ball(1000, true);
    vector<int> num(n);
    vector<pair<int, int>> sb;
    for (int i = 0; i < n; i++) {
        int s, b;
        cin >> num[i] >> s >> b;
        sb.push_back({s, b});
    }
    for (int i = 0; i < 1000; i++) {
        int hundred = i / 100, ten = (i / 10) % 10, one = i % 10;
        if (hundred == 0 || ten == 0 || one == 0) ball[i] = false;
        if (hundred == ten || ten == one || one == hundred) ball[i] = false;
        for (int j = 0; j < n; j++) {
            int target = num[j];
            int target100 = target / 100, target10 = (target / 10) % 10, target1 = target % 10;
            int nowS = 0, nowB = 0;
            if (hundred == target100) nowS++;
            else if (hundred == target10 || hundred == target1) nowB++;
            if (ten == target10) nowS++;
            else if (ten == target1 || ten == target100) nowB++;
            if (one == target1) nowS++;
            else if (one == target10 || one == target100) nowB++;
            if (sb[j].first != nowS || sb[j].second != nowB) ball[i] = false;
        }
    }
    for (int i = 0; i < 1000; i++)
        if (ball[i]) cnt++;
    cout << cnt << endl;
    return 0;
}