#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long num, result;
    cin >> num;
    int plus = 7;

    for (int i=0; i<num; i++)
    {
        if (num == 1)
        {
            result = 5;
            break;
        }
        if (i == 0)
        {
            result = 5;
        }
        else
        {
            result = result + plus;
            plus = plus + 3;
        }

    }
    result = result % 45678;
    cout << result;
}