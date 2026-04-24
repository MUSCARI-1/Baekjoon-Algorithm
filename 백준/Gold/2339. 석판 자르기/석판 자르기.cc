#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF = 1000000007;

int n;

vector<vector<int>> board;

int dc (int startX, int endX, int startY, int endY, int pastCut) {

    bool check = true;

    int jemCheck = 0;

    for (int i = startX; i < endX; i++) {

        for (int j = startY; j < endY; j++) {

            if (board[i][j] == 1) check = false;

            else if (board[i][j] == 2) jemCheck++;

            //cout << board[i][j] << " ";

        }

        //cout << endl;

    }

    //cout << check << " " << jemCheck << endl;

    if (jemCheck == 0) return 0;

    else if (jemCheck > 1) check = false;

    if (check) return 1;

    int cnt = 0;

    for (int i = startX + 1; i < endX - 1; i++) {

        if (pastCut == 1) break;

        int jem = 0, trash = 0;

        for (int j = startY; j < endY; j++) {

            if (board[i][j] == 1) trash++;

            else if (board[i][j] == 2) jem++;

        }

        if (jem == 0 && trash == 1) {

            int side1 = dc(startX, i, startY, endY, 1);

            int side2 = dc(i + 1, endX, startY, endY, 1);

            cnt += side1 * side2;

        }

    }

    for (int j = startY + 1; j < endY - 1; j++) {

        if (pastCut == 2) break;

        int jem = 0, trash = 0;

        for (int i = startX; i < endX; i++) {

            if (board[i][j] == 1) trash++;

            else if (board[i][j] == 2) jem++;

        }

        if (jem == 0 && trash == 1) {

            int side1 = dc(startX, endX, startY, j, 2);

            int side2 = dc(startX, endX, j + 1, endY, 2);

            cnt += side1 * side2;

        }

    }

    /*cout << endl;

    for (int i = startX; i < endX; i++) {

        for (int j = startY; j < endY; j++) 

            cout << board[i][j] << " ";

        cout << endl;

    }

    cout << startX << " " << endX << " " << startY << " " << endY << endl;

    cout << cnt << endl;*/

    return cnt;

}

int main() {

    FAST_IO

    cin >> n;

    board.resize(n);

    for (int i = 0; i < n; i++) {

        board[i].resize(n);

        for (int j = 0; j < n; j++)

            cin >> board[i][j];

    }

    int res = dc(0,n,0,n,0);

    if (res == 0) res = -1;

    cout << res;

    return 0;

}