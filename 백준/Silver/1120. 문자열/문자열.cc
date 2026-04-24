#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int main() {
    FAST_IO;
    string a, b;
    int res = INF;
    cin >> a >> b;
    for (int i = 0; i <= b.size()-a.size(); i++) {
        int cnt = 0;
        for (int j = 0; j < a.size(); j++) {
            if(a[j] != b[i+j]) cnt++;
        }
        res = min(res, cnt);
    }
    cout << res;
    return 0;
}

