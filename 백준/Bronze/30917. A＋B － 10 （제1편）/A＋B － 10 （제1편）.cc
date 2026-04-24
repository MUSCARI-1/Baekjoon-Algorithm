#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int a = INF, b = INF;
    for (int i = 1; i <= 9; i++) {
        cout << "? A " << i << endl;
        int flag;
        cin >> flag;
        if (flag == 1) {
            a = i;
            break;
        }
    }
    for (int i = 1; i <= 9; i++) {
        cout << "? B " << i << endl;
        int flag;
        cin >> flag;
        if (flag == 1) {
            b = i;
            break;
        }
    }
    cout << "! " << a + b << endl;
    return 0;
}