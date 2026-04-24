#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int main(){
    FAST_IO;
    int n, k;
    long long res = 0;
    cin >> n >> k;
    priority_queue<pair<int, int>> pq;
    vector<int> bag(k);
    vector<pair<int,int>> jewelry;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        jewelry.push_back({a,b});
    }
    for (int i = 0; i < k; i++) cin >> bag[i];
    sort(jewelry.begin(),jewelry.end());
    sort(bag.begin(),bag.end());
    int ptr = 0;
    for (int i = 0; i < k; i++) {
        while (ptr < n && bag[i] >= jewelry[ptr].first) {
            int ptrWeight = jewelry[ptr].first;
            int ptrPrice = jewelry[ptr].second;
            pq.push({ptrPrice, ptrWeight});
            ptr++;
        }
        if (pq.size() == 0) continue;
        res += pq.top().first;
        pq.pop();
    }
    cout << res << endl;
    return 0;
}