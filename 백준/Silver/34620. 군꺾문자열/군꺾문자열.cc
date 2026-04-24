#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;
long double INFINF = 987654321987654;

int main() {
    FAST_IO;
    int a, b;
    cin >> a >> b;
    int c = b;
    string s = "";
    vector<bool> v(100,false);
    int i = 0;
    while (c != 0) {
        if (c % 2 != 0 && c > 1){
            cout << -1 << endl;
            return 0;
        }
        if (a >= c){
            v[i] = true;
            a -= c;
        }
        c /= 2;
        i++;
    }
    for (int j = i - 1; j >= 1; j--) {
        if (v[j]) s.push_back('G');
        s.push_back('K');
    }
    cout << s << endl;
    return 0;
}

