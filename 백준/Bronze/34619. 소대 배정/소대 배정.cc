#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int main() {
    FAST_IO;
    int a,b,n,k;
    cin >> a >> b >> n >> k;
    int na = 1, nb = 1, nn = 0, nk = 0;
    while (nk < k) {
        if(nn == n) {
            nn = 0;
            nb++;
            if (nb > b){
                na++;
                nb = 1;
            }
        }
        nk++;
        nn++;
    }
    cout << na << " " << nb << endl;
    return 0;
}

