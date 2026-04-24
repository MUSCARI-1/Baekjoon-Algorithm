#include<iostream>

#include<vector>

using namespace std;

int n;

int cnt=0;

int solve(int a)

{

    while (a>-100000)

    {

        if (a < 0)

        {

            cout << -1;

            return 0;

        }

        else if (a % 5 == 0) 

        {

            cnt = cnt + a/5;

            cout << cnt;

            return 0;

        }

        else

        {

            cnt++;

            a = a-2;

        }

    }

}

int main()

{

    cin >> n;

    solve(n);

    return 0;

}