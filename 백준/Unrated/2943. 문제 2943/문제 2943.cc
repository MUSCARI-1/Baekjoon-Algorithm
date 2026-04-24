#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF = 1000000007;

vector<int> box, cup;

int n, m, rootN, cupSize;

long long solve() {

    long long cnt = 0, s, a;

    cin >> s >> a;

    a--;

    while (a % rootN != 0 && s != 0) {

        cnt += ++box[a++];

        s--;

    }

    while (s >= rootN && a < rootN * (cupSize - 1)) {

        cnt += ++cup[a/rootN];

        a += rootN;

        s -= rootN;

    }

    if (s == n - rootN * (cupSize -1) && a == rootN * (cupSize - 1) && s != 0) {

        cnt += ++cup[a/rootN];

    }

    else {

        while (s > 0) {

            cnt += ++box[a++];

            s--;

        }

    }

    //for (int i = 0; i < n; i++) cout << box[i] << " ";

    //cout << endl;

    //for (int i = 0; i < cupSize; i++) cout << cup[i] << " ";

    //cout << endl;

    return cnt;

}

int main() {

    FAST_IO;

    cin >> n >> m;

    rootN = int(sqrt(n));

    box.resize(n, 0);

    if (pow(rootN, 2) == n) cupSize = rootN;

    else if (n % rootN == 0) cupSize = n / rootN;

    else cupSize = n / rootN + 1;

    cup.resize(cupSize, 0);

    //cout << rootN << " " << cupSize << endl;

    while (m--) cout << solve() << "\n";

    return 0;

}