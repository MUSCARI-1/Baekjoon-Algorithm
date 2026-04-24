#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int num;

    cin >> num;

    vector<int> number_str(num);

    for (int i=0; i<num; i++)
    {
        cin >> number_str[i];
    }
    sort(number_str.begin(), number_str.end());
    for (int i=0; i<num; i++)
    {
        cout << number_str[i] << "\n";
    }
}