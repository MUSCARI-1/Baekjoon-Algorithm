#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

bool aka = true;
string s;

void dc(int size) {
    if (size <= 1 || !aka) return;
    int p1 = 0, p2 = size - 1;
    while (p1 < p2) {
        if (s[p1] != s[p2]) aka = false;
        p1++;
        p2--;
    }
    dc(size / 2);
}

int main() {
    FAST_IO
    cin >> s;
    dc(s.size());
    if (aka) cout << "AKARAKA";
    else cout << "IPSELENTI";
    return 0;
}