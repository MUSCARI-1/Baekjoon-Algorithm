#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;

int main() {
    FAST_IO
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) cout << '*';
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) cout << '*';
        cout << endl;
    }
    return 0;
}