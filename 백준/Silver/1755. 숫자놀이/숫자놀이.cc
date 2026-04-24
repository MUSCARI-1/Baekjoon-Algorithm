#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

// 8 5 4 9 1 7 6 3 2 0

int main() {
    FAST_IO;
    int m, n;
    cin >> m >> n;
    int value[99] = {8, 88, 85, 84, 89, 81, 87, 86, 83, 82, 80,
                     5, 58, 55, 54, 59, 51, 57, 56, 53, 52, 50,
                     4, 48, 45, 44, 49, 41, 47, 46, 43, 42, 40,
                     9, 98, 95, 94, 99, 91, 97, 96, 93, 92, 90,
                     1, 18, 15, 14, 19, 11, 17, 16, 13, 12, 10,
                     7, 78, 75, 74, 79, 71, 77, 76, 73, 72, 70,
                     6, 68, 65, 64, 69, 61, 67, 66, 63, 62, 60,
                     3, 38, 35, 34, 39, 31, 37, 36, 33, 32, 30,
                     2, 28, 25, 24, 29, 21, 27, 26, 23, 22, 20,};
    int cnt = 0;
    for (int i = 0; i < 99; i++){
        if (value[i] <= n && value[i] >= m){
            cout << value[i] << " ";
            cnt++;
            if (cnt % 10 == 0) cout << endl;
        }
    }
    return 0;
}