#include<iostream>

#include<vector>

using namespace std;

int total, n;

int cnt=0;

vector<int> coin;

int solve()

{

    cin >> n >> total;

    for (int i=0;i<n;i++)

    {

        int num;

        cin >> num;

        coin.push_back(num);

    }

    while(total>0)

    {

        for (int i=n-1;i>-1;i--)

        {

            if (total>=coin[i])

            {

                cnt = cnt + total/coin[i];

                total = total % coin[i];

            }

        }

    }

    cout << cnt;

    return 0;

}

int main()

{

    solve();

    return 0;

}