#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int main(){
    FAST_IO;
    int n, cnt = 0, high = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = n-1; i >= 0; i--) {
        if (v[i] > high) {
            cnt++;
            high = v[i];
        }
    }
    cout << cnt << endl;
    return 0;
}