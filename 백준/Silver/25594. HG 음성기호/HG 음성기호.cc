#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int main(){
    FAST_IO;
    string str, res = "";
    cin >> str;
    string a = "aespa", b = "baekjoon", c = "cau", d = "debug",
    e = "edge", f = "firefox", g = "golang", h = "haegang",
    i = "iu", j = "java", k = "kotlin", l = "lol",
    m = "mips", n = "null", o = "os", p = "python",
    q = "query", r = "roka", s = "solvedac", t = "tod",
    u = "unix", v = "virus", w = "whale", x = "xcode", y = "yahoo", z = "zebra";
    int ptr = 0;
    bool check = false;
    while (ptr < str.length()) {
        if (str[ptr] == 'a') {
            if (ptr + 5 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 5; ii++)
                if (str[ptr + ii] != a[ii]) check = true;
            if (!check) res += 'a';
            ptr += 5;
        }
        else if (str[ptr] == 'b') {
            if (ptr + 8 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 8; ii++)
                if (str[ptr + ii] != b[ii]) check = true;
            if (!check) res += 'b';
            ptr += 8;
        }
        else if (str[ptr] == 'c') {
            if (ptr + 3 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 3; ii++)
                if (str[ptr + ii] != c[ii]) check = true;
            if (!check) res += 'c';
            ptr += 3;
        }
        else if (str[ptr] == 'd') {
            if (ptr + 5 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 5; ii++)
                if (str[ptr + ii] != d[ii]) check = true;
            if (!check) res += 'd';
            ptr += 5;
        }
        else if (str[ptr] == 'e') {
            if (ptr + 4 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 4; ii++)
                if (str[ptr + ii] != e[ii]) check = true;
            if (!check) res += 'e';
            ptr += 4;
        }
        else if (str[ptr] == 'f') {
            if (ptr + 7 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 7; ii++)
                if (str[ptr + ii] != f[ii]) check = true;
            if (!check) res += 'f';
            ptr += 7;
        }
        else if (str[ptr] == 'g') {
            if (ptr + 6 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 6; ii++)
                if (str[ptr + ii] != g[ii]) check = true;
            if (!check) res += 'g';
            ptr += 6;
        }
        else if (str[ptr] == 'h') {
            if (ptr + 7 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 7; ii++)
                if (str[ptr + ii] != h[ii]) check = true;
            if (!check) res += 'h';
            ptr += 7;
        }
        else if (str[ptr] == 'i') {
            if (ptr + 2 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 2; ii++)
                if (str[ptr + ii] != i[ii]) check = true;
            if (!check) res += 'i';
            ptr += 2;
        }
        else if (str[ptr] == 'j') {
            if (ptr + 4 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 4; ii++)
                if (str[ptr + ii] != j[ii]) check = true;
            if (!check) res += 'j';
            ptr += 4;
        }
        else if (str[ptr] == 'k') {
            if (ptr + 6 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 6; ii++)
                if (str[ptr + ii] != k[ii]) check = true;
            if (!check) res += 'k';
            ptr += 6;
        }else if (str[ptr] == 'l') {
            if (ptr + 3 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 3; ii++)
                if (str[ptr + ii] != l[ii]) check = true;
            if (!check) res += 'l';
            ptr += 3;
        }
        else if (str[ptr] == 'm') {
            if (ptr + 4 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 4; ii++)
                if (str[ptr + ii] != m[ii]) check = true;
            if (!check) res += 'm';
            ptr += 4;
        }
        else if (str[ptr] == 'n') {
            if (ptr + 4 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 4; ii++)
                if (str[ptr + ii] != n[ii]) check = true;
            if (!check) res += 'n';
            ptr += 4;
        }
        else if (str[ptr] == 'o') {
            if (ptr + 2 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 2; ii++)
                if (str[ptr + ii] != o[ii]) check = true;
            if (!check) res += 'o';
            ptr += 2;
        }
        else if (str[ptr] == 'p') {
            if (ptr + 6 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 6; ii++)
                if (str[ptr + ii] != p[ii]) check = true;
            if (!check) res += 'p';
            ptr += 6;
        }
        else if (str[ptr] == 'q') {
            if (ptr + 5 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 5; ii++)
                if (str[ptr + ii] != q[ii]) check = true;
            if (!check) res += 'q';
            ptr += 5;
        }
        else if (str[ptr] == 'r') {
            if (ptr + 4 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 4; ii++)
                if (str[ptr + ii] != r[ii]) check = true;
            if (!check) res += 'r';
            ptr += 4;
        }
        else if (str[ptr] == 's') {
            if (ptr + 8 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 8; ii++)
                if (str[ptr + ii] != s[ii]) check = true;
            if (!check) res += 's';
            ptr += 8;
        }
        else if (str[ptr] == 't') {
            if (ptr + 3 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 3; ii++)
                if (str[ptr + ii] != t[ii]) check = true;
            if (!check) res += 't';
            ptr += 3;
        }
        else if (str[ptr] == 'u') {
            if (ptr + 4 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 4; ii++)
                if (str[ptr + ii] != u[ii]) check = true;
            if (!check) res += 'u';
            ptr += 4;
        }
        else if (str[ptr] == 'v') {
            if (ptr + 5 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 5; ii++)
                if (str[ptr + ii] != v[ii]) check = true;
            if (!check) res += 'v';
            ptr += 5;
        }
        else if (str[ptr] == 'w') {
            if (ptr + 5 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 5; ii++)
                if (str[ptr + ii] != w[ii]) check = true;
            if (!check) res += 'w';
            ptr += 5;
        }
        else if (str[ptr] == 'x') {
            if (ptr + 5 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 5; ii++)
                if (str[ptr + ii] != x[ii]) check = true;
            if (!check) res += 'x';
            ptr += 5;
        }
        else if (str[ptr] == 'y') {
            if (ptr + 5 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 5; ii++)
                if (str[ptr + ii] != y[ii]) check = true;
            if (!check) res += 'y';
            ptr += 5;
        }
        else if (str[ptr] == 'z') {
            if (ptr + 5 > str.length()) {
                check = true;
                break;
            }
            for (int ii = 1; ii < 5; ii++)
                if (str[ptr + ii] != z[ii]) check = true;
            if (!check) res += 'z';
            ptr += 5;
        }
        if (check) break;
    }
    if (check) cout << "ERROR!" << endl;
    else cout << "It's HG!" << endl << res << endl;
    return 0;
}