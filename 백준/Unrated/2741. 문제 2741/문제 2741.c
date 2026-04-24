#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int num;
    int j = 1;

    scanf("%d", &num);

    for (int i=0; i<num; i++)
    {
        printf("%d\n", j);
        j++;
    }
}