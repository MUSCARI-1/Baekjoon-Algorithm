#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int main() {
    FAST_IO
    int n, k;
    cin >> n >> k;
    long long cnt = 0;
    vector<int> length(21,0);
    queue<int> now;
    for (int i = 0; i < n; i++) {
        if (now.size() > k) {
            int nowL = now.front();
            now.pop();
            cnt += --length[nowL];
        }
        string s;
        cin >> s;
        int l = s.size();
        now.push(l);
        length[l]++;
    }
    while (now.size() != 0) {
        int nowL = now.front();
        now.pop();
        cnt += --length[nowL];
    }
    cout << cnt;
    return 0;
}