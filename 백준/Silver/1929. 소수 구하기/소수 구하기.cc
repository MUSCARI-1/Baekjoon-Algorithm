#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long min, max;
    int x = 0;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> min >> max;

    for (long long i=min; i<=max; i++)
    {
        for (long long j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                x = 1;
                break;
            }
        }
        if (x != 1 && i != 1)
        {
            cout << i << "\n";
        }
        x = 0;
    }
}