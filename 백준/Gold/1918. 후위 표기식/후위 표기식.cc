#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    string s;
    cin >> s;
    stack<char> stk;
    for (int i = 0; i < s.size(); i++) {
        char now = s[i];
        if (now != '+' && now != '-' && now != '*'
        && now != '/' && now != '(' && now != ')') cout << now;
        else {
            if (now == '(') stk.push(now);
            else if (now == ')') {
                char temp = stk.top();
                while (temp != '(') {
                    cout << temp;
                    stk.pop();
                    temp = stk.top();
                }
                stk.pop();
            }
            else if (now == '+' || now == '-') {
                while (true) {
                    if (stk.size() == 0 || stk.top() == '(') break;
                    cout << stk.top();
                    stk.pop();
                }
                stk.push(now);
            }
            else {
                while (true) {
                    if (stk.size() == 0 || stk.top() == '(' ||
                    stk.top() == '+' || stk.top() == '-') break;
                    cout << stk.top();
                    stk.pop();
                }
                stk.push(now);
            }
        }
    }
    while (stk.size() != 0) {
        cout << stk.top();
        stk.pop();
    }
    return 0;
}