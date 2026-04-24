#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int main() {
    FAST_IO;
    int n, res = -1;
    cin >> n;
    vector<int> v(51, 0);
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v[a]++;
    }
    for (int i = 0; i < 51; i++) {
        if (v[i] == i) res = i;
    }
    cout << res << endl;
    return 0;
}

