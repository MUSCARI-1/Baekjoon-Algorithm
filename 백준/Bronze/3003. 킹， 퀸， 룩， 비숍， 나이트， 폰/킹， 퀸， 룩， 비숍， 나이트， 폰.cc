#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    a = 1 - a;
    b = 1 - b;
    c = 2 - c;
    d = 2 - d;
    e = 2 - e;
    f = 8 - f;
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f;
}