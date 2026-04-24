#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF = 1000000007;

int main() {

    FAST_IO

    int n; 

    cin >> n;

    int cnt = 0;

    if (n < 10) {

        cout << n+1;

        return 0;

    }

    cnt += 10;

    int size = 1;

    while (true) {

        int idx = 1;

        for (int i = 0; i < size; i++) idx = idx * 10 + 1;

        for (int i = 1; i < 10; i++) {

            int now = idx * i;

            if (now <= n) cnt++;

            else {

                cout << cnt;

                return 0;

            }

        }

        size++;

    }

    return 0;

}