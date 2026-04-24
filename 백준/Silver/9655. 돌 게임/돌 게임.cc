#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n;
    cin >> n;
    if (n % 2 != 0) cout << "SK";
    else cout << "CY";
    return 0;
}