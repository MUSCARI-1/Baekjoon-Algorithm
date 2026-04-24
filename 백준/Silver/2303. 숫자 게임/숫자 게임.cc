#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int num = -1, winner = 0;

void solve(int now) {
    vector<int> v(5);
    for(int i = 0; i < 5; i++) cin >> v[i];
    for (int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            for(int k = j + 1; k < 5; k++) {
                int total = v[i] + v[j] + v[k];
                if(total % 10 >= num) {
                    num = total % 10;
                    winner = now;
                }
            }
        }
    }
}

int main() {
    FAST_IO;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) solve(i);
    cout << winner << endl;
    return 0;
}