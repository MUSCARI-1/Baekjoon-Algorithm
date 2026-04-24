#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int main() {
    FAST_IO;
    int n;
    cin >> n;
    int num[3] = {1, 2, 3};
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a == b) continue;
        int idx1, idx2;
        for (int j = 0; j < 3; j++) {
            if(num[j] == a) idx1 = j;
            if(num[j] == b) idx2 = j;
        }
        swap(num[idx1], num[idx2]);
    }
    cout << num[0] << endl;
    return 0;
}

