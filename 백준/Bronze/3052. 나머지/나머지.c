#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int number[10];
    int next_number[10];
    int result_count = 0;

    for (int i=0; i<10; i++)
    {
        scanf("%d", &number[i]);
    }
    next_number[0] = number[0] % 42;
    result_count++;

    for (int i=1; i<10; i++)
    {
        next_number[i] = number[i] % 42;
        for (int j=0; j<i; j++)
        {
            if (next_number[i] == next_number[j])
            {
                result_count--;
                break;
            }

        }
        result_count++;
    }
    printf("%d", result_count);
}