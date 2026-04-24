#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, num1, num2, num3, result, garbege1, garbege2, garbege3;
    cin >> a >> b;
    garbege1 = b % 10;
    garbege2 = b % 100 / 10;
    garbege3 = b / 100;
    num1 = a * garbege1;
    num2 = a * garbege2;
    num3 = a * garbege3;
    result = a * b;
    cout << num1 << "\n" << num2 << "\n" << num3 << "\n" << result;
}