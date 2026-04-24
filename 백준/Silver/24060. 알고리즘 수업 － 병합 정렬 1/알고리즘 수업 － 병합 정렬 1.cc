#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int n, k, cnt = 0;
vector<int> tmp;

void merge (vector<int> &v, int p,int q,int r) {
    int i = p, j = q + 1, t = 1;
    while (i <= q && j <= r) {
        if (v[i] <= v[j]) tmp[t++] = v[i++];
        else tmp[t++] = v[j++];
    }
    while (i <= q) tmp[t++] = v[i++];
    while (j <= r) tmp[t++] = v[j++];
    i = p; t = 1;
    while (i <= r) {
        cnt++;
        if (cnt == k) {
            cout << tmp[t];
            exit(0);
        }
        v[i++] = tmp[t++];
    }
}

void mergeSort (vector<int> &v, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        mergeSort (v, p, q);
        mergeSort (v, q + 1, r);
        merge(v, p, q, r);
    }
}

int main(){
    FAST_IO;
    cin >> n >> k;
    tmp.resize(n+1, 0);
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    mergeSort (v, 1, n);
    cout << -1;
    return 0;
}