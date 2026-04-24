#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int n;

    scanf("%d", &n);

    int x = n-1;
    int y = 1;
    int z = n-1;
    int zz = 1;

    for (int j=0; j<n; j++)
    {
        while (x>0)
        {
            printf(" ");
            x--;
        }
        while  (y>0)
        {
            printf("*");
            y--;
        }
        z--;
        zz++;
        x = z;
        y = zz;
        printf("\n");
    }
}