#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long a, b, ab1, ab2, result;
    cin >> a >> b;
    ab1 = a + b;
    ab2 = a - b;
    result = ab1 * ab2;
    cout << result;
}