#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 987654321;

int n;
vector<int> start;
vector<int> ending;

int startSearch(int key) {
    int left = 0, right = n;
    while (left < right) {
        int mid = (right + left) / 2;
        if (key >= start[mid]) {
            left = mid + 1;
        }
        else if (key < start[mid]) {
            right = mid;
        }
    }
    return left;
}

int endingSearch(int key) {
    int left = 0, right = n;
    while (left < right) {
        int mid = (right + left) / 2;
        if (key > ending[mid]) {
            left = mid + 1;
        }
        else if (key <= ending[mid]) {
            right = mid;
        }
    }
    return left;
}

int main() {
    FAST_IO;
    cin >> n;
    start.resize(n);
    ending.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> start[i] >> ending[i];
    }
    sort(start.begin(), start.end());
    sort(ending.begin(), ending.end());
    int q;
    cin >> q;
    while (q--) {
        int now;
        cin >> now;
        int a = startSearch(now);
        int b = endingSearch(now);
        cout << a - b << "\n";
    }
    return 0;
}