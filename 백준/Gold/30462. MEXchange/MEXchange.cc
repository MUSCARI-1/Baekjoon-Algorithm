#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long INF = 1000000007;

int main() {
    FAST_IO
    // mex() : 입력받는 값, res() : 출력하기 위한 최종 배열
    int n;
    cin >> n;
    vector<int> mex(n + 1), res(n + 1, -1);
    vector<bool> check(n + 1, false);
    // 입력
    for (int i = 1; i <= n; i++) cin >> mex[i];
    // 뼈대 생성
    for (int i = n; i > 1; i--) {
        if (mex[i-1] != mex[i]) {
            res[i] = mex[i-1];
            check[mex[i-1]] = true;
        }
    }
    // 나머지 배열 채우기
    // nowNum : 인덱스
    int nowNum = 1;
    for (int i = 1; i <= n; i++) {
        if (res[i] == -1) {
            while (check[nowNum]) nowNum++;
            res[i] = nowNum;
            check[nowNum] = true;
        }
    }
    // 최종적으로 만들어진 배열을 역추적했을 때 다시 입력받은 배열이 나오는지 확인
    // flag가 Y/N 여부 결정
    // last() : 마지막으로 숫자 쓴거 체크하기 위한 배열
    vector<bool> last(n + 1, false);
    int idx = 1;
    bool flag = true;
    // 단조증가인지 검사
    for (int i = 1; i < n; i++)
        if (mex[i] > mex[i+1]) flag = false;
    // 역추적했는데 mex랑 일치하는지 여부 검사
    for (int i = 1; i <= n; i++) {
        if (last[res[i]]) flag = false;
        last[res[i]] = true;
        while (idx <= n && last[idx]) idx++;
        if (idx != mex[i]) flag = false;
    }
    if (!flag) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    for (int i = 1; i <= n; i++) cout << res[i] << " ";
    return 0;
}