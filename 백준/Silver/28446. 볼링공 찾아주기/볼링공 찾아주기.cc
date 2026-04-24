#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

queue<int> que;
vector<pair<int,int>> chest;

int solve(int weight, int L, int R) {
    int mid = L + (R-L)/2;
    if (weight < chest[mid].first)
        return solve(weight, L, mid);
    else if (weight > chest[mid].first)
        return solve(weight, mid+1, R);
    else return chest[mid].second;
}

int main(){
    FAST_IO;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int c;
        cin >> c;
        if (c == 1) {
            int num, weight;
            cin >> num >> weight;
            chest.push_back({weight, num});
        }
        else {
            int weight;
            cin >> weight;
            que.push(weight);
        }
    }
    sort (chest.begin(), chest.end());
    int size = chest.size();
    while (!que.empty()) {
        int weight = que.front();
        que.pop();
        cout << solve(weight, 0, size) << "\n";
    }
    return 0;
}