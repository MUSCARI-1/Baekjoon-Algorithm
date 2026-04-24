#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int main(){
    FAST_IO;
    int n, gram = 0, price = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char c;
        int w, h, l;
        cin >> c;
        cin >> w >> h >> l;
        if (c == 'A') {
            int cnt = (w / 12) * (h / 12) * (l / 12);
            price += cnt * 4000;
            gram += 500 * cnt + 1000;
        }
        else {
            gram += 6000;
        }
    }
    cout << gram << endl << price << endl;
    return 0;
}