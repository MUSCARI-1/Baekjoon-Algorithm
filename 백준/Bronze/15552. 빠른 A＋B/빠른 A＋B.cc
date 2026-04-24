#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, a, b;
    cin >> num;
    int result[num];
    for (int i=1; i<=num; i++)
    {
        cin >> a >> b;
        result[i] = a + b;
    }
    for (int i=1; i<=num; i++)
    {
        cout << result[i] << "\n";
    }
}