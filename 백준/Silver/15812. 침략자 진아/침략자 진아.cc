#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int INF=987654321;

int n, m, result = INF;

bool check(vector<string> vila) {
    bool flag = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vila[i][j] == '1') flag = false;
        }
    }
    return flag;
}

int solve(vector<string> vila, int a, int b, int c, int d) {
    int time = 0;
    int x[4] = {1,0,-1,0};
    int y[4] = {0,-1,0,1};
    vila[a][b] = '2';
    vila[c][d] = '2';
    queue<pair<int,int> > q;
    q.push({a,b});
    q.push({c,d});
    while(1) {
        int nowTurn = q.size();
        for (int i = 0; i < nowTurn; i++) {
            int xx = q.front().first;
            int yy = q.front().second;
            q.pop();
            for (int j = 0; j < 4; j++) {
                int nextX = xx + x[j];
                int nextY = yy + y[j];
                if (nextX < 0 || nextX >=n || nextY < 0 || nextY >= m) continue;
                if (vila[nextX][nextY] == '2') continue;
                vila[nextX][nextY] = '2';
                q.push({nextX,nextY});
            }
        }
        time++;
        if (check(vila)) break;
    }
    /*for (int i = 0; i < n; i++) {
        cout << vila[i] << endl;
    }
    cout << endl;*/
    return time;
}

int main() {
    FAST_IO;
    cin >> n >> m;
    vector<string> vila(n);
    for (int i = 0; i < n; i++) cin >> vila[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vila[i][j] == '1') continue;
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < m; l++) {
                    if (vila[k][l] == '1') continue;
                    if (k < i || (k == i && l <= j)) continue;
                    result = min(result, solve(vila, i, j, k, l));
                }
            }
        }
    }
    cout << result << endl;
    return 0;
}