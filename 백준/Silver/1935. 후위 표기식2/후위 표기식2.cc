#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 1000000007;

int main() {
    FAST_IO
    int n;
    string s;
    cin >> n >> s;
    cout << fixed;
    cout.precision(2);
    vector<double> num(n);
    for (int i = 0; i < n; i++) cin >> num[i];
    stack<double> stk;
    for (int i = 0; i < s.size(); i++) {
        char now = s[i];
        if (now == '+') {
            double b = stk.top();
            stk.pop();
            double a = stk.top();
            stk.pop();
            double c = a + b;
            stk.push(c);
        }
        else if (now == '-') {
            double b = stk.top();
            stk.pop();
            double a = stk.top();
            stk.pop();
            double c = a - b;
            stk.push(c);
        }
        else if (now == '*') {
            double b = stk.top();
            stk.pop();
            double a = stk.top();
            stk.pop();
            double c = a * b;
            stk.push(c);
        }
        else if (now == '/') {
            double b = stk.top();
            stk.pop();
            double a = stk.top();
            stk.pop();
            double c = a / b;
            stk.push(c);
        }
        else {
            int idx = now - 65;
            stk.push(num[idx]);
        }
    }
    cout << stk.top();
    return 0;
}