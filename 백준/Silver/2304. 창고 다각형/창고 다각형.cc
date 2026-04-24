#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int main() {
    FAST_IO
    int n;
    cin >> n;
    vector<int> stick(1001, 0); // idx, height
    vector<int> res(1001, 0);
    for (int i = 0; i < n; i++) {
        int idx;
        cin >> idx;
        cin >> stick[idx];
    }
    stack<int> high;
    high.push(0);
    for (int i = 0; i < 1001; i++) {
        if (stick[i] > high.top()) high.push(stick[i]);
        res[i] = high.top();
    }
    int cnt = 0;
    while (high.size() != 1) high.pop();
    for (int i = 1000; i >= 0; i--) {
        if (stick[i] > high.top()) high.push(stick[i]);
        res[i] = min(res[i],high.top());
        cnt += res[i];
    }
    cout << cnt;
    return 0;
}