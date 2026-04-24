#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int main() {
    FAST_IO;
    int n, m;
    cin >> n >> m;
    vector<vector<vector<int>>> v(3);
    for (int i = 0; i < 3; i++) {
        v[i].resize(3);
        for (int j = 0; j < 3; j++) {
            v[i][j].resize(3, 0);
        }
    }
    string sub[3] = {"kor" , "eng", "math"};
    string fruit[3] = {"apple" , "pear", "orange"};
    string color[3] = {"red" , "blue", "green"};
    while (n--) {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int a, b, c;
        for (int i = 0; i < 3; i++) {
            if (s1 == sub[i]) a = i;
            if (s2 == fruit[i]) b = i;
            if (s3 == color[i]) c = i;
        }
        v[a][b][c]++;
    }
    while (m--) {
        int cnt = 0;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int a = -1, b = -1, c = -1;
        for (int i = 0; i < 3; i++) {
            if (s1 == sub[i]) a = i;
            if (s2 == fruit[i]) b = i;
            if (s3 == color[i]) c = i;
        }
        if (a == -1 && b == -1 && c == -1) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    for (int k = 0; k < 3; k++) {
                        cnt += v[i][j][k];
                    }
                }
            }
        }
        else if (a == -1 && b == -1) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cnt += v[i][j][c];
                }
            }
        }
        else if (b == -1 && c == -1) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cnt += v[a][i][j];
                }
            }
        }
        else if (a == -1 && c == -1) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cnt += v[i][b][j];
                }
            }
        }
        else if (a == -1) {
            for (int i = 0; i < 3; i++) {
                cnt += v[i][b][c];
            }
        }
        else if (b == -1) {
            for (int i = 0; i < 3; i++) {
                cnt += v[a][i][c];
            }
        }
        else if (c == -1) {
            for (int i = 0; i < 3; i++) {
                cnt += v[a][b][i];
            }
        }
        else cnt = v[a][b][c];
        cout << cnt << "\n";
    }
    return 0;

}