#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

int main() {
    FAST_IO
    int n, p, cnt = 0;
    cin >> n >> p;
    stack<int> l1, l2, l3, l4, l5, l6;
    for (int i = 0; i < n; i++) {
        int line, num;
        cin >> line >> num;
        if (line == 1) {
            while (l1.size() != 0 && l1.top() > num) {
                l1.pop();
                cnt++;
            }
            if (l1.size() == 0 || l1.top() != num) {
                l1.push(num);
                cnt++;
            }
        }
        else if (line == 2) {
            while (l2.size() != 0 && l2.top() > num) {
                l2.pop();
                cnt++;
            }
            if (l2.size() == 0 || l2.top() != num) {
                l2.push(num);
                cnt++;
            }
        }
        else if (line == 3) {
            while (l3.size() != 0 && l3.top() > num) {
                l3.pop();
                cnt++;
            }
            if (l3.size() == 0 || l3.top() != num) {
                l3.push(num);
                cnt++;
            }
        }
        else if (line == 4) {
            while (l4.size() != 0 && l4.top() > num) {
                l4.pop();
                cnt++;
            }
            if (l4.size() == 0 || l4.top() != num) {
                l4.push(num);
                cnt++;
            }
        }
        else if (line == 5) {
            while (l5.size() != 0 && l5.top() > num) {
                l5.pop();
                cnt++;
            }
            if (l5.size() == 0 || l5.top() != num) {
                l5.push(num);
                cnt++;
            }
        }
        else {
            while (l6.size() != 0 && l6.top() > num) {
                l6.pop();
                cnt++;
            }
            if (l6.size() == 0 || l6.top() != num) {
                l6.push(num);
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}