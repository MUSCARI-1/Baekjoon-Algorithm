#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF = 1000000007;
long long INFINF = 1000000000000000007;

long long n, atk;
vector<tuple<long long, long long, long long>> room;

long long solve() {
    long long left = 0, right = INFINF;
    while (left < right) {
        long long mid = (left + right) / 2;
        long long nowHP = mid, nowATK = atk;
        bool dead = false;
        for (int i = 0; i < n; i++) {
            long long info = get<0>(room[i]), ap = get<1>(room[i]), hp = get<2>(room[i]);
            if (info == 1) {
                long long dmg = ap * ((hp - 1) / nowATK);
                nowHP -= dmg;
                if (nowHP <= 0) {
                    dead = true;
                    break;
                }
            }
            else {
                nowATK += ap;
                nowHP = min(mid, nowHP + hp);
            }
        }
        if (dead) left = mid + 1;
        else right = mid;
    }
    return left;
}

int main() {
    FAST_IO
    cin >> n >> atk;
    for (int i = 0; i < n; i++) {
        long long t, a, h;
        cin >> t >> a >> h;
        room.push_back({t, a, h});
    }
    cout << solve();
    return 0;
}