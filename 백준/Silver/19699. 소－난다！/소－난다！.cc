#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int n, m;
vector<int> kg;
vector<int> prime;

bool check(int a){
    bool c = true;
    for(int i = 2; i < a; i++)
        if (a % i == 0) c = false;
    return c;
}

void solve(vector<int> now, int k){
    if (now.size() == m) {
        int cnt = 0;
        for (int i = 0; i < m; i++) cnt += now[i];
        if (!check(cnt)) return;
        prime.push_back(cnt);
        return;
    }
    for (int i = k; i < n; i++) {
        now.push_back(kg[i]);
        solve(now, i+1);
        now.pop_back();
    }
    return;
}

int main() {
    FAST_IO;
    cin >> n >> m;
    kg.resize(n);
    for (int i = 0; i < n; i++) cin >> kg[i];
    vector<int> k;
    solve(k, 0);
    if (prime.size() == 0) cout << -1 << endl;
    else{
        sort(prime.begin(), prime.end());
        cout << prime[0] << " ";
        for (int i = 1; i < prime.size(); i++) {
            if (prime[i] == prime[i-1]) continue;
            cout << prime[i] << " ";
        }
    }
    return 0;
}

