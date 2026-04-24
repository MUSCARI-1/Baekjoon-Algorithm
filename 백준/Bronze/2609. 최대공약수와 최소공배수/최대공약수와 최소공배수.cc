#include <iostream>
using namespace std;
int main()
{
    int a, b, gcd, lcm;
    cin >> a >> b;
    if (a>b)
    {
        gcd = b;
        lcm = a;
    }
    else 
    {
        gcd = a;
        lcm = b;
    }
    for (int i=0; i>-1; i++) 
    {
        if (a % gcd == 0 && b % gcd == 0)
        {
            cout << gcd << "\n";
            break;
        }
        else
        {
            gcd--;
        }
    }
    for (int i=0; i>-1; i++)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            cout << lcm;
            break;
        }
        else
        {
            lcm++;
        }
    }
}