#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int n,q;
vector<long long> wall;

int concert() {
    long long c, leftX, rightX, leftPtr, rightPtr;
    cin >> c >> leftX;
    rightX = leftX;
    leftPtr = c-1;
    rightPtr = c;
    while(leftPtr >= 0 && leftX > 0){
        if(leftX > wall[leftPtr]) {
            leftX -= wall[leftPtr];
            wall[leftPtr] *= 2;
            leftPtr--;
        }
        else {
            wall[leftPtr] += leftX;
            break;
        }
    }
    while(rightPtr < n && rightX > 0) {
        if(rightX > wall[rightPtr]) {
            rightX -= wall[rightPtr];
            wall[rightPtr] *= 2;
            rightPtr++;
        }
        else {
            wall[rightPtr] += rightX;
            break;
        }
    }
    return 0;
}

int check() {
    int c;
    cin >> c;
    cout << wall[c-1] << "\n";
    return 0;
}

int main() {
    FAST_IO;
    cin >> n;
    wall.resize(n);
    for(int i = 0; i < n; i++) cin >> wall[i];
    cin >> q;
    for(int i = 0; i < q; i++){
        int k;
        cin >> k;
        if(k == 1) concert();
        else check();
    }
    return 0;
}