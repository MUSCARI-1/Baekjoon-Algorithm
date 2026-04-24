#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO;
    int m, n = INF;
    cin >> m;
    vector<int> time(m);
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        string hour, minute;
        hour += s[0];
        hour += s[1];
        minute += s[3];
        minute += s[4];
        int a = stoi(hour), b = stoi(minute);
        time[i] = (a * 60 + b) % 720;
    }
    int dist = 1;
    while (dist <= 720) {
        vector<bool> check(720, false);
        int cnt = 0;
        for (int i = 0; i < m; i++) {
            int ptr = time[i] - (i * dist) % 720;
            if (ptr < 0) ptr += 720;
            check[ptr] = true;
        }
        for (int i = 0; i < 720; i++)
            if (check[i]) cnt++;
        n = min(n, cnt);
        dist++;
    }
    cout << n << endl;
    return 0;
}