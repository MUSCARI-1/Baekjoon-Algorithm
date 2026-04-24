#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 2000000000;

int main() {
    FAST_IO;
    long long n, k;
    cin >> n >> k;
    long long ptr1 = 1, ptr2 = n, cnt = n - 1;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        if (k >= cnt) {
            k -= cnt;
            v[i] = ptr2;
            ptr2--;
        }
        else {
            v[i] = ptr1;
            ptr1++;
        }
        cnt--;
    }
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    return 0;
}