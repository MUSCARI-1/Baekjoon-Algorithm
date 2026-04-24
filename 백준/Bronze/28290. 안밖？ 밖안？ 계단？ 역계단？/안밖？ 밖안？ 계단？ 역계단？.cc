#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;
long long INFINF = 10000000000000007;

int main() {
    FAST_IO
    string s;
    cin >> s;
    if (s == "fdsajkl;" || s == "jkl;fdsa") cout << "in-out";
    else if (s == "asdf;lkj" || s == ";lkjasdf") cout << "out-in";
    else if (s == "asdfjkl;") cout << "stairs";
    else if (s == ";lkjfdsa") cout << "reverse";
    else cout << "molu";
    return 0;
}