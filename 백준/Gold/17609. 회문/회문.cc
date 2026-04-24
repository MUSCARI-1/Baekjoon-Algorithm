#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

bool isPal(string s, int L, int R) {
    int left = L, right = R;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

bool isJjap(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        }
        else {
            if (isPal(s, left+1, right)) return true;
            else if (isPal(s, left, right-1)) return true;
            else return false;
        }
    }
}

int solve() {
    string s;
    cin >> s;
    if (isPal(s, 0, s.length()-1)) return 0;
    else if (isJjap(s)) return 1;
    else return 2;
}

int main(){
    FAST_IO;
    int t;
    cin >> t;
    while(t--) cout << solve() << endl;
    return 0;
}