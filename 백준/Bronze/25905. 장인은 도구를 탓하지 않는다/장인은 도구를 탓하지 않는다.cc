#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int main() {
    FAST_IO;
    cout << fixed << setprecision(7);
    vector <long double> percent(10);
    for (int i = 0; i < 10; i++) cin >> percent[i];
    sort(percent.begin(), percent.end());
    long double res = 1;
    for (int i = 1; i < 10; i++) {
        long double temp = i;
        res *= percent[i] / temp;
    }
    res *= 1000000000;
    cout << res << endl;
    return 0;
}


