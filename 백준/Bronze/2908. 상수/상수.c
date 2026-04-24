#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int num1[3], num2[3];

    for (int i=0; i<3; i++)
    {
        scanf("%1d", &num1[i]);
    }
    for (int i=0; i<3; i++)
    {
        scanf("%1d", &num2[i]);
    }
    if (num1[2] > num2[2])
    {
        printf("%d", num1[2]);
        printf("%d", num1[1]);
        printf("%d", num1[0]);
    }
    else if (num2[2] > num1[2])
    {
        printf("%d", num2[2]);
        printf("%d", num2[1]);
        printf("%d", num2[0]);
    }
    else
    {
        if (num1[1] > num2[1])
        {
            printf("%d", num1[2]);
            printf("%d", num1[1]);
            printf("%d", num1[0]);
        }
        else if (num2[1] > num1[1])
        {
            printf("%d", num2[2]);
            printf("%d", num2[1]);
            printf("%d", num2[0]);
        }
        else
        {
            if (num1[0] > num2[0])
            {
                printf("%d", num1[2]);
                printf("%d", num1[1]);
                printf("%d", num1[0]);
            }
            else
            {
                printf("%d", num2[2]);
                printf("%d", num2[1]);
                printf("%d", num2[0]);
            }
        }
    }
}
