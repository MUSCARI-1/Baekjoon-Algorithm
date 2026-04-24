#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int num, min, max;

    scanf("%d", &num);

    int x[num];

    for (int i=0; i<num; i++)
    {
        scanf("%d", &x[i]);
    }
    min = x[0];
    max = x[0];

    for (int j=0; j<num; j++)
    {
        if (min > x[j])
        {
            min = x[j];
        }
        if (max < x[j])
        {
            max = x[j];
        }
    }
    printf("%d %d", min, max);
}