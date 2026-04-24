#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF = 1000000007;

int main() {

    FAST_IO

    string s;

    cin >> s;

    if (s[0] == '0' && s[1] == 'x') {

        int now = 0;

        for (int i = 2; i < s.size(); i++) {

            now <<= 4;

            int alpha = s[i] - '0';

            if (alpha > 40) alpha -= 39;

            

            now += alpha;

        }

        cout << now;

    }

    else if (s[0] == '0') {

        int now = 0;

        for (int i = 1; i < s.size(); i++) {

            now <<= 3;

            int alpha = s[i] - '0';

            now += alpha;

        }

        cout << now;

    }

    else cout << stoi(s);

    return 0;

}