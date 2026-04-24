#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

vector<long long> v;
vector<long long> prefix;
long long n;

long long dq(long long s, long long e) {
    if (s == e) return 0;
    if (s + 1 == e) return v[s] * v[s];
    long long mid = (s + e) / 2;
    long long res = max(dq(s, mid), dq(mid, e));
    long long left = mid, right = mid, mini = v[mid];
    long long score = v[mid] * v[mid];
    long long totalsum = v[mid];
    while (right - left + 1 < e - s) {
        long long heightL = left > s ? v[left - 1] : -1;
        long long heightR = right < e - 1 ? v[right + 1] : -1;
        if (heightL > heightR) {
            left--;
            mini = min(mini, v[left]);
            totalsum += v[left];
        }
        else {
            right++;
            mini = min(mini, v[right]);
            totalsum += v[right];
        }
        score = max(score, totalsum * mini);
    }
    res = max(score, res);
    return res;
}

int main() {
    FAST_IO
    cin >> n;
    v.resize(n);
    prefix.resize(n + 1, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++) prefix[i] = prefix[i-1] + v[i];
    cout << dq(0, n);
    return 0;
}