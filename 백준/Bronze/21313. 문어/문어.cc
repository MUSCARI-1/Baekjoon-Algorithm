#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;

int main() {
    FAST_IO;
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) cout << "1 ";
        else cout << "2 ";
    }
    if (n % 2 != 0) cout << "3 ";
    else cout << "2 ";
    return 0;
}