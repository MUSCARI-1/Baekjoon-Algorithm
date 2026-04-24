#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int num, x, result;
    result = 0;

    scanf("%d", &num);

    for (int i=0; i<num; i++)
    {
        scanf("%1d", &x);
        result = result + x;
    }
    printf("%d", result);
}