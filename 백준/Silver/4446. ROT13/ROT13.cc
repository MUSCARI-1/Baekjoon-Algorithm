#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

string solve(string s) {
    string decode = s;
    string mo = "aiyeou";
    string ja = "bkxznhdcwgpvjqtsrlmf";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        int ascii = c;
        if (ascii < 65 || ascii > 122 || (ascii > 90 && ascii <97)) continue;
        bool upper = ascii < 91;
        if (upper) c += 32;
        if (c == 'a' || c == 'i' || c == 'o'
            || c == 'u' || c == 'y' || c == 'e') {
            int idx = 0;
            for (; idx < mo.length(); idx++) {
                if (c == mo[idx]) break;
            }
            idx -= 3;
            if (idx < 0) idx += mo.length();
            c = mo[idx];
        }
        else {
            int idx = 0;
            for (; idx < ja.length(); idx++) {
                if (c == ja[idx]) break;
            }
            idx -= 10;
            if (idx < 0) idx += ja.length();
            c = ja[idx];
        }
        if (upper) c -= 32;
        decode[i] = c;
    }
    return decode;
}

int main(){
    FAST_IO;
    string s;
    while (getline(cin, s)) {
        cout << solve(s) << endl;
    }
    return 0;
}