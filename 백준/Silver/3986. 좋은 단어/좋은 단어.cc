#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int main() {
    FAST_IO
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        stack<char> alpha;
        for (int j = 0; j < s.size(); j++) {
            if (alpha.size() == 0) alpha.push(s[j]);
            else if (alpha.top() == s[j]) alpha.pop();
            else alpha.push(s[j]);
        }
        if (alpha.size() == 0) cnt++;
    }
    cout << cnt;
    return 0;
}