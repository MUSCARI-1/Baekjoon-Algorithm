#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 2000000001;

vector<char> alpha;
vector<bool> check(15, false);
int l, c;

void backTracking (int ja, int mo, int ptr) {
    if (ja + mo == l) {
        if (ja < 2 || mo < 1) return;
        for (int i = 0; i < c; i++)
            if (check[i]) cout << alpha[i];
        cout << endl;
    }
    else {
        for (int i = ptr; i < c; i++) {
            check[i] = true;
            if (alpha[i] == 'a' || alpha[i] == 'e' || alpha[i] == 'i' ||
            alpha[i] == 'o' || alpha[i] == 'u') backTracking(ja, mo + 1, i + 1);
            else backTracking(ja + 1, mo, i + 1);
            check[i] = false;
        }
    }
}

int main() {
    FAST_IO;
    cin >> l >> c;
    alpha.resize(c);
    for (int i = 0; i < c; i++) cin >> alpha[i];
    sort(alpha.begin(), alpha.end());
    backTracking(0, 0, 0);
    return 0;
}