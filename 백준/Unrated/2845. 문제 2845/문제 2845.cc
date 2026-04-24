#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a, b, c;
    int news1 = 0;
    int news2 = 0;
    int news3 = 0;
    int news4 = 0;
    int news5 = 0;

    cin >> a >> b;
    cin >> news1 >> news2 >> news3 >> news4 >> news5;

    c = a * b;

    news1 = news1 - c;
    news2 = news2 - c;
    news3 = news3 - c;
    news4 = news4 - c;
    news5 = news5 - c;

    cout << news1 << " " << news2 << " " << news3 << " " << news4 << " " << news5;
}