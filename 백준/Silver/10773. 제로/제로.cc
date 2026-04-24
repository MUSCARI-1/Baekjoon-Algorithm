#include <iostream>

#include <vector>

using namespace std;

int main(int argc, char *argv[])

{

    int count;

    int sub;

    long long result = 0;

    

    cin >> count;

    vector<int> number_str(count, 0);

    

    int j=0;

    for (int i=0; i<count; i++)

    {

        cin >> sub;

        if (sub == 0)

        {

            number_str[j-1] = 0;

            j--;

        }

        else

        {

            number_str[j] = sub;

            j++;

        }

    }

    for (int i=0; i>-1; i++)

    {

        if (number_str[i] == 0)

        {

            cout << result;

            return 0;

        }

        else

        {

            result = result + number_str[i];

        }

    }

}