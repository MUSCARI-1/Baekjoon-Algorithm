#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

void check1(string s, int *ptr, bool *status, int size) {
    int flag = 0;
    if (s[*ptr] != 'A' && s[*ptr] != 'B' && s[*ptr] != 'C' && s[*ptr] != 'D'
    && s[*ptr] != 'E' && s[*ptr] != 'F')  flag = -1;
    else if (s[*ptr] == 'A') {
        while (flag == 0) {
            (*ptr)++;
            if(*ptr == size - 1) flag = -1;
            else if (s[*ptr] != 'A') flag = 1;
        }
    }
    else {
        if (*ptr + 1 >= size - 1 || s[*ptr + 1] != 'A') flag = -1;
        while (flag == 0) {
            (*ptr)++;
            if(*ptr == size - 1) flag = -1;
            else if (s[*ptr] != 'A') flag = 1;
        }
    }
    if (flag == -1) *status = false;
}

void check2(string s, int *ptr, bool *status, int size) {
    if (!*status) return;
    int flag = 0;
    if (*ptr == size - 1) {
        *status = false;
        return;
    }
    if (s[*ptr] != 'F') flag = -1;
    else {
        while (flag == 0) {
            (*ptr)++;
            if(*ptr == size) flag = -1;
            else if (s[*ptr] != 'F') flag = 1;
        }
    }
    if (flag == -1) {
        *status = false;
        return;
    }
    flag = 0;
    if (*ptr == size) flag = -1;
    if (s[*ptr] != 'C') flag = -1;
    else {
        while (flag == 0) {
            (*ptr)++;
            if(*ptr == size) flag = 1;
            else if (s[*ptr] != 'C') flag = 1;
        }
    }
    if (flag == -1) *status = false;
}

void check3(string s, int *ptr, bool *status, int size) {
    if (!*status) return;
    if (*ptr >= size) return;
    if ((s[*ptr] == 'A' || s[*ptr] == 'B' || s[*ptr] == 'C' || s[*ptr] == 'D' ||
    s[*ptr] == 'E' || s[*ptr] == 'F') && *ptr + 1 == size) return;
    *status = false;
}

void solve() {
    string s;
    cin >> s;
    int size = s.size();
    bool status = true;
    int nowPtr = 0;
    check1(s, &nowPtr, &status, size);
    check2(s, &nowPtr, &status, size);
    check3(s, &nowPtr, &status, size);
    if (!status) cout << "Good" << endl;
    else cout << "Infected!" << endl;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

