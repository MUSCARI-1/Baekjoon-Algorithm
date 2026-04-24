#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> num(3);

    for (int i=0; i>-1; i++)
    {
        cin >> num[0] >> num[1] >> num[2];

        if (num[0] == 0)
        {
            return 0;
        }

        sort(num.begin(), num.end(),greater<>());

        if ((num[0]*num[0]) == (num[1]*num[1]) + (num[2]*num[2]))
        {
            cout << "right\n";
        }
        else
        {
            cout << "wrong\n";
        }
    }
}