#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int num;

    scanf("%d", &num);

    int number[num];
    int count = 0;

    for (int i=0; i<num; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int i=0; i<num; i++)
    {
        for (int j=2; j<=number[i]; j++)
        {
            if (number[i] == j)
            {
                count++;
                break;
            }
            else if (number[i] % j == 0)
            {
                break;
            }

        }
    }
    printf("%d", count);
}