#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int num;

    scanf("%d", &num);

    int j = num;

    for (int i=0; i<num; i++)
    {
        printf("%d\n", j);
        j--;
    }
}