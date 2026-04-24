#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

float a, b, n;
float delta;
float epCoef = 0;

float integral(float degree) {
    float calc = (pow(b, degree + 1) - pow(a, degree + 1)) / (degree + 1);
    return calc;
}

int main() {
    FAST_IO
    int k;
    cin >> k;
    vector<float> fx(k + 1);
    for (int i = k; i >= 0; i--) cin >> fx[i];
    cin >> a >> b >> n;
    float left = 0, right = 0;
    for (int i = 0; i <= k; i++) left += integral(float(i)) * fx[i];
    delta = (b - a) / n;
    for (int i = 0; i < int(n); i++) {
        // ??
        right += (a + float(i) * delta);
    }
    right *= fx[1] * delta;
    right += fx[0] * n * delta;
    epCoef = fx[1] * delta * n;
    left -= right;
    left /= epCoef;
    cout << left << endl;
    return 0;
}