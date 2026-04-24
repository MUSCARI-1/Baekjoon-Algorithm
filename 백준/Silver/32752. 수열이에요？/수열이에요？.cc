#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int main(){
    FAST_IO;
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n+1);
    for (int i = 1; i <=n; i++) cin >> v[i];
    sort(v.begin() + l, v.begin() + r + 1);
    bool check = true;
    for (int i = 1; i < n; i++) {
        if (v[i] > v[i+1]) check = false;
    }
    if (check) cout << 1;
    else cout << 0;
    return 0;
}