#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int count, num, plus;
    char ox[80];

    plus = 0;
    num = 0;

    scanf("%d", &count);

    for (int i=0; i<count; i++)
    {
        scanf("%s", ox);
        for (int j=0; j>-1; j++)
        {
            if (ox[j] == 'O')
            {
                plus++;
                num = num + plus;
            }
            else if (ox[j] == 'X')
            {
                plus = 0;
            }
            else
            {
                printf("%d\n", num);
                num = 0;
                plus = 0;
                break;
            }
        }
    }
}